class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # n square approach TLE

        # for i,v in enumerate(nums):
        #     for j,v2 in enumerate(nums):
        #         if v == v2 and j != i:
        #             return True
        
        # return False

        nums_dict = {}

        for v in nums:
            if v in nums_dict:
                return True
            else:
                nums_dict[v] = 1
        
        return False

        