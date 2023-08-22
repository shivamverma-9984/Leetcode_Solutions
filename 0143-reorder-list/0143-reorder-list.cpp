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
    
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>values;

        while(temp){
            values.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=values.size()-1;
        vector<int>newvalues;
        while(i<=j){
            newvalues.push_back(values[i]);
            newvalues.push_back(values[j]);
            i++;
            j--;
        }
        temp=head;
        int index=0;
        while(temp){
            temp->val=newvalues[index];
            index++;
            temp=temp->next;
        } 
    }
};