# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        temp=head
        l=0
        while temp:
            temp=temp.next
            l+=1
        temp1=head
        x=k
        while(x>1):
            temp1=temp1.next
            x-=1
        y=l-k+1
        temp2=head
        while(y>1):
            temp2=temp2.next
            y-=1
        temp1.val,temp2.val=temp2.val,temp1.val
        return head
            
        