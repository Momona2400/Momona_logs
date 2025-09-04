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
    int max = A[0];
    for(int i = 1; i < n; i++) {
        if(max<A[i]) {
            max = A[i];
        }
    }
    int m = max+1;
    int M[m];
    for(int i = 0; i < m; i++) {
        M[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        M[A[i]]++;
    }
    printf("Unique elements are: ");
    for(int i = 0; i < m; i++) {
        if(M[i]==1) {
            printf("%d ", i);
        }
    }

}