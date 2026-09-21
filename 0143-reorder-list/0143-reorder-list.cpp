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

        if(head == NULL || head->next == NULL) {
            return;
        }

        stack<ListNode*> st;

        // Step 1: Store all nodes
        ListNode* temp = head;

        while(temp != NULL) {
            st.push(temp);
            temp = temp->next;
        }

        // Step 2: Reorder
        ListNode* curr = head;

        while(curr != NULL && !st.empty()) {

            ListNode* last = st.top();

            // Middle tak pahunch gaye
            if(curr == last || curr->next == last) {
                last->next = NULL;
                break;
            }

            st.pop();

            ListNode* next = curr->next;

            curr->next = last;
            last->next = next;

            curr = next;
        }
    }
};