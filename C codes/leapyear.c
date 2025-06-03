#include<stdio.h>
void main() {
    int y;
    scanf("%d", &y);
    (y%400==0||(y%4==0&&y%100!=0))?printf("leap year"):printf("not a leap year");
}