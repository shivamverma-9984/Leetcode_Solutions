# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
            lst1=[]
            lst2=[]
            while l1:
                lst1.append(l1.val)
                l1=l1.next
            while l2:
                lst2.append(l2.val)
                l2=l2.next
            lst1.reverse()
            lst2.reverse()
            # n1=int("".join(map(str,lst1)))
            # n2=int("".join(map(str,lst2)))
            n1=0
            n2=0
            for num in lst1:
                n1=n1*10+num
            for num in lst2:
                n2=n2*10+num
            f=str(n1+n2)[::-1]
            res1=ListNode()
            res2=res1
            for num in f:
                res1.next=ListNode(num)
                res1=res1.next
            return res2.next