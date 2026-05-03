class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ref_dict = {}
        

        for i,v in enumerate(nums):
            comp = target - v

            if comp in ref_dict.keys():
                return [i,ref_dict[comp]]

            ref_dict[v] = i                
        