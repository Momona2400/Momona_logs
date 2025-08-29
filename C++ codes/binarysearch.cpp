#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter length of an array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the array: ";
    for(int i = 0; i < n; i++) {
        cin>>A[i];
    }
    int x;
    for(int i = n-1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            int t;
            if(A[j] > A[j+1]) {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    cout<<"The sorted array will be: ";
    for(int i = 0; i < n; i++) {
        cout<<A[i]<<" ";
    }
    cout<<"\nEnter the digit you want to search in the array: ";
    cin>>x;
    int f = 0, l = n, m;
    for(int i = f; i < l; i++) {
        m = (f+l)/2;
        if(x == A[m]) {
            break;
        }
        else if(x > A[m]) {
            f = m;
        }
        else if(x < A[m]) {
            l = m;
        }
    }
    cout<<"The element is present at index "<<m<<" in the array.";

    return 0;
}