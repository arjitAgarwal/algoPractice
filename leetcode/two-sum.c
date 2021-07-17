/*
    Link - https://leetcode.com/problems/two-sum/
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.
*/

struct test {
    int index;
};

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *test;
    int size = 10000;
    struct test temp[size];
    memset(temp, -1, sizeof(struct test) * size);
    for(int i = 0; i < numsSize; i++) {
        temp[nums[i]].index = i;
    }

    *returnSize = 2;
    test = (int*)malloc(*returnSize * sizeof(int));
    for(int i = 0; i < numsSize; i++) {
        int diff = target - nums[i];
        if (temp[diff].index >= 0 && temp[diff].index != i) {
            if(temp[diff].index > i) {
                test[0] = i;
                test[1] = temp[diff].index;
            } else {
                test[1] = i;
                test[0] = temp[diff].index;
            }

            return test;
        }
    }

    return test;
    
}