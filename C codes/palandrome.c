#include<stdio.h>
int pal(int x, int rev);

void main() {
    int n;
    scanf("%d", &n);
    printf("%d", pal(n,0));
}

int pal(int x, int rev) {
    if(x==0)
    return rev;
    else {
        rev *= 10;
        rev += x%10;
        x /= 10;
        return pal(x, rev);
    }
}