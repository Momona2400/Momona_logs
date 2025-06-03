#include<stdio.h>
#include<string.h>
void main() {
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; n != 1; i++) {
        a[i] = n%2;
        n /= 2;
    }
    for(i=0;i<n;i++)
    printf("%d", a[i]);
}