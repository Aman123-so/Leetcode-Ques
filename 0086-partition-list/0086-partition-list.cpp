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
       ListNode*  small= new ListNode(0);
       ListNode* big= new ListNode(0);

       ListNode* s= small;
       ListNode* b= big;

       while(head != NULL){
        ListNode* temp= head;
        head= head->next;
        temp->next= NULL;
        if(temp->val <x){
            s->next=temp;
            s= s->next;
        }
        else{
            b->next= temp;
            b= b->next;
        }
       } 
       s->next= big->next;
       return small->next;
    }
};