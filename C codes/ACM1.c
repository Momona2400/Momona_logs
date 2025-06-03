#include<stdio.h>
void main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, a, b;
        scanf("%d%d%d", &n, &a, &b);
        while(1) {
            if(a!=n && a+1!=b)
            a+=1;
            else if(a!=1 && a-1!=b)
            a-=1;
            if(b!=n && b+1!=a)
            b+=1;
            else if(b!=1 && b-1!=a)
            b-=1;
            if(a==n && a==b+1) {
                printf("NO");
                break;
            }
            else if(b==n && b==a+1) {
                printf("YES");
                break;
            }
        }
    }
}