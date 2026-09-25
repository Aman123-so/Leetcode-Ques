class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL)
            return NULL;

        Node* temp = head;

        // Step 1: Copy node and insert after original node
        while(temp != NULL) {

            Node* copyNode = new Node(temp->val);

            copyNode->next = temp->next;
            temp->next = copyNode;

            temp = copyNode->next;
        }

        // Step 2: Set random pointers
        temp = head;

        while(temp != NULL) {

            Node* copyNode = temp->next;

            if(temp->random != NULL)
                copyNode->random = temp->random->next;

            temp = copyNode->next;
        }

        // Step 3: Separate original and copied list
        Node* dNode = new Node(-1);
        Node* res = dNode;

        temp = head;

        while(temp != NULL) {

            res->next = temp->next;

            temp->next = temp->next->next;

            res = res->next;
            temp = temp->next;
        }

        return dNode->next;
    }
};