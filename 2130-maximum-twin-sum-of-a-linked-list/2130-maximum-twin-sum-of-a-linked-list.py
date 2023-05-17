# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        # ans=float("-inf")
        # temp=head
        # lst=[]
        # while temp:
        #     lst.append(temp.val)
        #     temp=temp.next
        # for i in range(len(lst)):
        #     ans=max(ans,lst[i]+lst[len(lst)-i-1])    
        # return ans
        
        res=float("-inf")
        stack=[]
        t=head
        while t:
            stack.append(t.val)
            t=t.next
        n=len(stack)//2
        i=0
        while(i<n):
            res=max(res,head.val+stack.pop())
            head=head.next
            i+=1
        return res   
        
        