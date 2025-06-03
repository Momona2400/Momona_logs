#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int a[n], f, l, mid, flag;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int i = 0;
    f = i;
    l = n;
    while(f <= l) {
        mid = (f+l)/2;
        if(9 > a[mid])
        f = mid;
        else
        l = mid;
    }
    if(9 == a[mid])
    printf("element present");
    else
    printf("element not present");

}