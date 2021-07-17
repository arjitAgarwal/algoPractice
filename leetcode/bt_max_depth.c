/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/

*/

/**
 * Definition for a binary tree node.
 * 
 */

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int
calculate(struct TreeNode* root, int count) {
  if (root == NULL) {
    return count;
  }

  count++;
  int left_count = calculate(root->left, count);
  int right_count = calculate(root->right, count);
  return MAX(left_count, right_count);
}
 


int 
maxDepth(struct TreeNode* root){
  return calculate(root, 0);
}