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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       int  first=-1;
       int prevCritical=-1;
       int minDist= INT_MAX;
       int pos=2;
       ListNode* prev= head;
       ListNode* curr= head->next;
       while(curr->next != NULL){
        ListNode* next=curr->next;
        
           bool isCritical =
                (curr->val > prev->val && curr->val > next->val) ||
                (curr->val < prev->val && curr->val < next->val);
            
            if (isCritical) {
                
                // First critical point
                if (first == -1) {
                    first = pos;
                }
                
                // Calculate distance from previous critical point
                if (prevCritical != -1) {
                    minDist = min(minDist, pos - prevCritical);
                }
                
                // Current critical point becomes previous critical point
                prevCritical = pos;
            }
            
            // Move forward
            prev = curr;
            curr = next;
            pos++;
        }
        
        // Less than 2 critical points
        if (first == -1 || first == prevCritical) {
            return {-1, -1};
        }
        
        // Distance between first and last critical point
        int maxDist = prevCritical - first;
        
        return {minDist, maxDist};
    }
};