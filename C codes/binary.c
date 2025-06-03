#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int sum = 0, a = 1;
    while(n > 0) {
        sum += ((n%2)*a);
        n = n/2;
        a *= 10;
    }

    printf("%d", sum);
}