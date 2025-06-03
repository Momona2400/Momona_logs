#include<stdio.h>
void main() {
    int n, i, j, k, s;
    scanf("%d", &n);
    if(n == 1 || n == 0 || n == 2)
    printf("No");
    else {
        for(i = 2; i < n-1; i++) {
            s = n - i;
            for(j = 2; j < i; j++) {
                if(i%j==0)
                break;
            }
            for(k = 2; k < s; k++) {
                if(s%k==0)
                break;
            }
            if(s == k && i == j)
            break;
        }
        if(s == k && i == j)
        printf("Yes");
        else
        printf("No");
    }
}