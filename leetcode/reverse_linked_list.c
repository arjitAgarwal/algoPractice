/*
https://leetcode.com/problems/reverse-linked-list/

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
	if (head == NULL) {
		return head;
	}

	struct ListNode *prev = NULL;
	while (head != NULL) {
		struct ListNode *next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}

	return prev;
}