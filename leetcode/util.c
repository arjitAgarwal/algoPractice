
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

void swap(int *nums, int pos1, int pos2) {
    int temp = nums[pos1];
    nums[pos1] = nums[pos2];
    nums[pos2] = temp;
}

void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void print(char *off, int *nums, int start, int end) {
    printf("\n %s Array Print", off);
    for (int i = start; i <= end; i++)
        printf("%d", nums[i]);
}