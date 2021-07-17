#include <stdio.h>
#include <utils.h>
#include <merge_sort.h>

int main() {
    int a[10];
    init_array(a, 10);
    print_array("Before Sort", a, 10);

    merge_sort(a, 10);

    print_array("After Sort", a, 10);
    return 0;
}