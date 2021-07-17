/*
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

*/

int binary_search(int *nums, int start, int end, int target, bool last) {
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;
    if (nums[mid] == target) {
        if (last == false) {
            if (mid > 0 && mid > start && nums[mid - 1] == target) {
                return binary_search(nums, start, mid - 1, target, last);
            } else {
                return mid;
            }
        } else {
            if (mid < end && nums[mid + 1] == target) {
                return  binary_search(nums, mid + 1, end, target, last);
            } else {
                return mid;
            }
        }

        return mid;
    } else if (nums[mid] > target) {
        return binary_search(nums, start, mid - 1, target, last);
    } else {
        return binary_search(nums, mid + 1, end, target, last);
    }

    return -1;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *result = malloc(sizeof(int) * (*returnSize));
    result[0] = binary_search(nums, 0, numsSize - 1, target, false);
    result[1] = binary_search(nums, 0, numsSize - 1, target, true);
    return result;
}