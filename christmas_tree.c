#include<stdio.h>
int main() {
    int h, i, j;
    printf("Enter the number of rows to be printed:");
    scanf("%d", &h);

    for(i = 0; i <= h; i++) {
        int space = h - i, dot = 2 * i - 1;
        for(j = 0; j < space; j++) {
            printf(" \t");
        }
        for(j = 0; j < dot; j++) {
            printf("*\t");
        }
        printf("\n");
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < (h - 2); j++) {
            printf(" \t");
        }
        for(j = 0; j < 3; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}
