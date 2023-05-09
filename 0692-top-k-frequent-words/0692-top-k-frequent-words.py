class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
            c=[[-val,key] for key,val in Counter(words).items()]
            heapq.heapify(c)
            ans=[]
            while k:
                x=heapq.heappop(c)
                ans.append(x[1])
                k-=1
            return ans
        