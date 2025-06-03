#include<stdio.h>
#include<string.h>
void main() {
    int a = 5, *p;
    p = &a;
    int y = *p;
    printf("%d, %d, %d\n", a, *p, y);
    *p = 6;
    printf("%d, %d, %d", a, *p, y);
}