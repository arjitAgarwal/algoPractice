/*
https://leetcode.com/problems/kth-largest-element-in-an-array/
*/

void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition2 (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap2(&arr[i], &arr[j]);
        }
    }
    swap2(&arr[i + 1], &arr[high]);
    return (i + 1);
}

int sort(int *nums, int start, int end, int index_to_find) {
    if (start < end) {
        int index = partition2(nums, start, end);
        if (index == index_to_find) {
            return nums[index_to_find];
        } else if(index < index_to_find) {
            return sort(nums, index + 1, end, index_to_find);
        } else {
            return sort(nums, start, index - 1, index_to_find);
        }
    }

    return 
}

int findKthLargest(int* nums, int numsSize, int k) {
    return sort(nums, 0, numsSize - 1, numsSize - k);
}