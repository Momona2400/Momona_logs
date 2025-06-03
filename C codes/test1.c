#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n, sum = 0, a = 1, sum2 = 0;
	    scanf("%d", &n);
	    while(n > 0) {
	        sum += ((n%2)*a);
	        a *= 10;
	        n /= 2;
	    }
	    // while(sum > 0) {
	    //     sum2 += sum%10;
	    //     sum /= 10;
	    // }
	    printf("%d\n", sum);
    }
}