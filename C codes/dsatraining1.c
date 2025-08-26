#include<stdio.h>

int maxof3(int x, int y, int z) {
    if(x > y) {
        if(x>z)
        return x;
        else
        return z;
    }
    else {
        if(y>z)
        return y;
        else
        return z;
    }
}

void main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("max is %d", maxof3(a, b, c));
}