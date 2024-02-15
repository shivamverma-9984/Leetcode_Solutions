class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic=Counter(nums)
        print(dic)
        mat=sorted([[key,val] for key,val in dic.items()],key=lambda x:x[1])
        print(mat)
        l=[]
        for i in range(k):
            x=mat.pop()
            l.append(x[0])
           
        print(l)
        return l