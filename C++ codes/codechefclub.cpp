#include<iostream>
#include<vector>
using namespace std;

int main() {

    //input number of digits in array
    int n;
    cin>>n;

    //input array
    vector<int> arr(n);
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

    //declare new array result 
    vector<int> result(n);

    //add the elements of sorted array in the result array one by one leaving one space in mid
    for(int i = 0, j = 0; i < ((n%2)==0?(n/2):(n/2)+1); i++, j+=2) {
        result[j] = arr[i];
    }

    //add the left elements in sorted array in the space we left in mid of the result array
    for(int i = ((n%2)==0?(n/2):(n/2)+1), j = 1; i < n; i++, j+=2) {
        result[j] = arr[i];
    }


    //print the result array
    for(int i = 0; i < n; i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}