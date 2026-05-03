class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        if len(s) != len(t):
            return False

        ref_dict = {}

        for v in s:
            if v in ref_dict:
                ref_dict[v] += 1
            else:
                ref_dict[v] = 1

        
        for v in t:
            if v in ref_dict:
                ref_dict[v] -= 1
            else:
                return False

        for v in ref_dict.values():
            if v != 0:
                return False
            

        return True
        