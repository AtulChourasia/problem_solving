class Solution(object):
    def sortArray(self, nums):
        def merge(arr, L, M, R):
            left, right = arr[L : M + 1], arr[M + 1 : R + 1]
            i, j, k = L, 0, 0

            while j < len(left) and k < len(right):
                if left[j] <= right[k]:
                    arr[i] = left[j]
                    j += 1
                else:
                    arr[i] = right[k]
                    k += 1
                i += 1
            while j < len(left):
                nums[i] = left[j]
                j += 1
                i += 1
            while k < len(right):
                nums[i] = right[k]
                k += 1
                i += 1
        
        def mergeSort(arr, l, r):
            if l == r:
                return

            m = (l + r) // 2
            mergeSort(arr, l, m)
            mergeSort(arr, m + 1, r)
            merge(arr, l, m, r)
            return
        
        mergeSort(nums, 0, len(nums))
        return nums