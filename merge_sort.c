#include <stdio.h>
#include <utils.h>
#include <merge_sort.h>

static inline 
void merge (int *array, int start, int end, int middle) {
    printf("Start is %d middle is %d and end is %d", start, middle, end);
    int size = (end - start) + 1; 
    int temp[size];
    int left = start;
    int right = end;
    for (int i = 0; i < size; i++) {
        if (left < middle && array[left] > array[right]) {
            temp[i] = array[right--];
        } else {
            temp[i] = array[left++];
        }

        if (left <= middle) {
            if (array[left] > array[right]) {
                temp[i] = array[right--];
            }
        } else {
            temp[i] = array[right--];
        }
    }

    int k = start;
    for (int i = 0; i < size; i++) {
        array[start++] = temp[i];
    }
}

static inline void
sort(int *array, int start, int end) {
    if (end <= start){
        return;
    }

    print_array_with_range("Init", array, start, end);
    int middle = (end + start - 1) / 2;
    print_array_with_range("First Split", array, start, middle);
    sort(array, start, middle);
    print_array_with_range("Second Split", array, middle + 1, end);
    sort(array, middle + 1, end);
    print_array_with_range("After split", array, start, end);

    merge(array, start, end, middle);
    print_array_with_range("After merge", array, start, end);
}

int 
merge_sort(int *a, int n) {
    print_array_with_range("Init - 1", a, 0, n - 1);
    sort(a, 0, n - 1);
    return 0;
}
