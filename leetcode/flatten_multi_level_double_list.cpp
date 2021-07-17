/*
https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/

*/

/*
// Definition for a Node.
*/
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:

    Node *merge(Node* head) {
        Node *node = head;
        while(node != NULL) {
            Node *next = node->next;
            if (node->child != NULL) {
                node->next = node->child;
                node->child->prev = node;
                node->child = NULL;
                node = merge(node->next);
                node->next = next;
            }

            if (next == NULL) {
                return node;
            } else {
                next->prev = node;
            }

            node = next;
        }

        return NULL;
    }

    Node* flatten(Node* head) {
        merge(head);
        return head;
    }
};
