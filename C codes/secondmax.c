#include<stdio.h>
void main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    int max1 = arr[0];
    int max2 = arr[0];
    for(int i = 1; i<n; i++) {
        scanf("%d", &arr[i]);
        if(max1<arr[i])
        max1 = arr[i];
    }
    if(max1 != arr[0])
    max2 = arr[0];
    else
    max2 = arr[1];
    for(int i = 0; i<n;i++) {
        if(max2< arr[i] && arr[i] != max1)
        max2 = arr[i];
    }
    printf("%d", max2);
}