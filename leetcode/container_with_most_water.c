/*
Link -  https://leetcode.com/problems/container-with-most-water/
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

*/

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


int maxArea(int* height, int heightSize) {
    int max_area = 0;
    int j = heightSize - 1;
    int i = 0;
    while(i < j) {
        int length = MIN(height[i], height[j]);
        int width = j - i;
        max_area = MAX(length * width, max_area);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }

    return max_area;
}
