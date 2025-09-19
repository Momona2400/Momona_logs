#include<iostream>
using namespace std;

int main() {

    //enter numbers of element in a array
    int n;
    cin>>n;

    //enter the array
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    //sort the array
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            int t;
            if(arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    //print 2nd element of array
    cout<<arr[1];

    return 0;
}