class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        d={}
        ans=-1
        for i in range(len(s)):
            if s[i] in d:
                ans=max(ans,i-d[s[i]]-1)
            else:
                d[s[i]]=i
        return ans