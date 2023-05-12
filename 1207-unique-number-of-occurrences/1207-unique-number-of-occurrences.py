class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        s=set()
        d=Counter(arr)
        for i,j in d.items():
            if j in s:
                return False
            s.add(j)
        return True