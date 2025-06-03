//unfinished

#include<stdio.h>
void main() {
    int n, x, t;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for(int i =0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    int f = 0, l = n-1, mid;
    while(arr[mid] != x) {
        mid = (f+l)/2;
        if(arr[mid] == x)
        printf("element present at index %d", mid);
        else if(arr[mid] < x) {
            f = mid;
        }
        else if(arr[mid] > x) {
            l = mid;
        }
        else 
        printf("element not present");
    }
}

//unfinished