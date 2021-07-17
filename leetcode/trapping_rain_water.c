/*
Link -  https://leetcode.com/problems/trapping-rain-water/
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

int trap(int* height, int heightSize) {
    int *left = (int *) malloc(heightSize * sizeof(int));
    int *right = (int *) malloc(heightSize * sizeof(int));
    int max = -1;
    for (int i = 1; i < heightSize; i++) {
        if(height[i - 1] > max) {
            max = height[i - 1];
        }

        left[i] = max;
    }

    max = -1;
    for (int i = heightSize -2; i > 0; i--) {
        if(height[i + 1] > max) {
            max = height[i + 1];
        }

        right[i] = max;
    }

    int water = 0;
    for (int i = 1; i < heightSize - 1; i++) {
        int data = MIN(left[i], right[i]) - height[i];
        if (data >= 0) {
            water += data;
        }
    }

    free(left);
    free(right);

    return water;
}