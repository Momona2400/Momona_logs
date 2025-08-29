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
    int F[n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(A[i] == A[j])
            printf("%d is repeated.", A[i]);
            break;
        }
        for(int k = i+1; k < n; k++) {
            if(A[i] == A[j])
            printf("%d is repeated.", A[i]);
            break;
        }
    }
}