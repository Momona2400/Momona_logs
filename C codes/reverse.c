#include<stdio.h>
void main() {
    int n, t, s;
    scanf("%d", &n);
    s = n/2;
    int A[n], i;
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < s; i++) {
        t = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = t;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}