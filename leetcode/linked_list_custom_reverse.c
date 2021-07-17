/*
Link -  https://leetcode.com/problems/reverse-linked-list-ii/

*/

/**
 * Definition for singly-linked list.
 * */

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
	if (left == right) {
		return head;
	}

	struct ListNode *node = head;
	struct ListNode *left_node = head;
	struct ListNode *right_node = NULL;
	int position = 1;
	while(node != NULL && position < left) {
		left_node = node;
		node = node->next;
		position++;
	}

	struct ListNode *prev = NULL;
	right_node = node;
	while(node != NULL && position <= right) {
		right_node = node->next;
		node->next = prev;
		prev = node;
		node = right_node;
		position++;
	}
	
	left_node->next = prev;
	right_node->next = node;

	return head;
}