#include<stdio.h>
#include<math.h>
void main() {
    int x, n, i = 0, sum = 0;
    scanf("%d%d", &x, &n);
    while(i <= (2*n)-2) {
        if(i%4 == 0)
        sum += pow(x,i);
        else
        sum -= pow(x,i);
        i += 2;
    }
    printf("%d", sum);
}