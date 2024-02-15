class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic={}
        for elem in nums:
            if elem in dic:
                dic[elem]+=1
            else:
                dic[elem]=1
        print(dic)
        mat=sorted([[key,val] for key,val in dic.items()],key=lambda x:x[1])
        print(mat)
        l=[]
        for i in range(k):
            x=mat.pop()
            l.append(x[0])
           
        print(l)
        return l