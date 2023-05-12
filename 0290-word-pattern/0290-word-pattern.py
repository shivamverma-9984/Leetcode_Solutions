class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
            # d={}
            # s=nums2.split()
            # for i in range(len(nums1)):
            #     if nums1[i] in d and d[nums1[i]]!=s[i]:
            #         return False
            #     elif s[i] in d.values():
            #           return False
            #     else:
            #         d[nums1[i]]=s[i]
            # return True   
        
        s=s.split()
        d= {}
        if len(pattern) !=len(s):
            return False
        for i in range(len(pattern)):
            char = pattern[i]
            if char in d:
                if d[char] != s[i]:
                    return False 
            elif s[i] in d.values():
                return False
            else:
                d[char] = s[i]
        return True