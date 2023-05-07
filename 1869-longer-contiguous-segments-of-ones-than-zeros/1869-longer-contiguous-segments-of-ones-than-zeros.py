class Solution:
    def checkZeroOnes(self, s: str) -> bool:
        t1="1"
        t2="0"
        while t1 in s:
            t1+="1"
        while t2 in s:
            t2+="0"
        return True if len(t1)-1>len(t2)-1 else False
            