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
    for(int i = 0; i < n; i++) {
        if(A[i] != i+1) {
            printf("%d", i+1);
            break;
        }
    }
}