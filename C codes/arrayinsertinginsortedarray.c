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
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            int t;
            if(A[j] > A[j+1]) {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    printf("Sorted array will be: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    int x;
    printf("\nEnter the element you want to insert: ");
    scanf("%d", &x);
    for(int i = n-1; i >= 0; i--) {
        if(x > A[i]){
            A[i+1] = x;
            break;
        }
        else {
            A[i+1] = A[i];
        }
    }
    printf("Array will be: ");
    for(int i = 0 ; i < n+1; i++) {
        printf("%d ", A[i]);
    }
    
}