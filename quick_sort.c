void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// With end element as pivot
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
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int *nums, int start, int end) {
    if (start < end) {
        int index = partition(nums, start, end);
        quick_sort(nums, start, index - 1);
        quick_sort(nums, index + 1, end);
    }
}

void
main(int* nums, int numsSize) {
    quick_sort(nums, 0, numsSize - 1);
}