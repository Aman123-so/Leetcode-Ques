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
    int pairSum(ListNode* head) {
        int maxSum=0;
        int sum=0;
        vector<int>v;
        ListNode* temp= head;
        while(temp!= NULL){
            v.push_back(temp->val);
            temp= temp->next;
        }
        int n= v.size();
        int i=0; 
       int  j= n-1;
        while(i<j){
            sum =  v[i]+ v[j];
            maxSum= max(maxSum,sum);
            i++;
            j--;
        }
       return maxSum;
    }
};