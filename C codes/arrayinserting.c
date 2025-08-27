#include<stdio.h>

void main() {
    int n;
    printf("Enter numbers of digits in an array: ");
    scanf("%d", &n);
    int A[100];
    printf("Enter array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int t, j;
    printf("Enter the digit you want to insert: ");
    scanf("%d", &t);
    printf("Enter the index on which you want to insert the digit: ");
    scanf("%d", &j);
    for(int i = n; i > j; i--) {
        A[i] = A[i-1];
    }
    A[j] = t;
    for(int i = 0; i < n+1; i++) {
        printf("%d ", A[i]);
    }

}