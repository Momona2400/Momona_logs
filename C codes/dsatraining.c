#include<stdio.h>

void main() {
        int c[3][4] = {2,3,1,6,4,1,6,2,2,7,1,10};
        printf("%u, %u, %u\n", c, c+1, &c+1);

}