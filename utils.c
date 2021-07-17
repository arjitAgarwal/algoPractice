#include <stdio.h>
#include <stdlib.h>
#include <utils.h>

#define MAX_NUMBER          100000

void 
print_array(char *off, int *a, int n) {
    if (off != NULL) {
        printf("\n%s -  ", off);
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf(", %d", a[i]);
        }
    }

    printf("\n");
}

void 
print_array_with_range(char *off, int *a, int start, int end) {
    if (off != NULL) {
        printf("\n%s -  ", off);
    }

    printf("Start is %d end is %d  ", start, end );
    for (int i = start; i <= end; i++) {
        if (i == start) {
            printf("%d", a[i]);
        } else {
            printf(", %d", a[i]);
        }
    }

    printf("\n");
}

void 
init_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % MAX_NUMBER;
    }
}

void 
print_2d_array(char *off, int *a, int row, int column) {
    if (off != NULL) {
        printf("\n%s -  ", off);
    }

    for (int i = 0; i < row; i++) {
        printf("\n");
        for (int j = 0; j < column; j++) {
            printf(" %d", a[i][j]);
        }
    }

    printf("\n");
}

void 
init_2d_array(int *a, int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            a[i][j] = rand() % MAX_NUMBER;
        }
    }
}