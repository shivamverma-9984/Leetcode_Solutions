/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         ListNode* small= new ListNode(0);
         ListNode* large= new ListNode(0);
         ListNode* psmall= small;
         ListNode* plarge= large;
         while(head!=NULL)
         {
              if(head->val<x)
             {
                  small->next=head;
                  small=small->next;
             }
             else{
                large->next=head;
                large=large->next; 
             }
             head=head->next;
         }
         small->next=plarge->next;
         large->next=NULL;
         return psmall->next;



    }
};