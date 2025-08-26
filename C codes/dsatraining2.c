#include<stdio.h>

void main() {
    int d, m, y;
    scanf("%d%d%d", &d, &m, &y);
    if(m < 3) {
        m += 12;
        y-=1;
    }
    int w = d + (2.6 × m − 0.2) + y + (y/4) − (y / 100) + (y / 400);
    printf("w");


}