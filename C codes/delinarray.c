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
    int x, m;
    printf("Enter the element you want to delete: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(A[i] == x) {
            m = i;
        }
    }
    for(int i = m; i < n-1; i++) {
        A[i] = A[i+1];
    }
    printf("Sorted array: ");
    for(int i = 0; i < n-1; i++) {
        printf("%d ", A[i]);
    }

}