#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    cin>>n1>>n2;
    int a1[100], a2[100], a3[200];
    for(int i = 0; i < n1; i++) {
        cin>>a1[i];
    }
    for(int i = 0; i < n2; i++) {
        cin>>a2[i];
    }
    int k = 0;
    if(n2<n1) {
        for(int j = 0; j < n2; j++) {
            for(int i = 0; i < n1; i++) {
                if(a2[j] == a1[i]) {
                    a3[k] = a2[j];
                    cout<<a3[k]<<" ";
                    k++;
                    break;
                }
            }
        }
    }
    else {
        for(int j = 0; j < n1; j++) {
            for(int i = 0; i < n2; i++) {
                if(a2[j] == a1[i]) {
                    a3[k] = a2[j];
                    cout<<a3[k]<<" ";
                    k++;
                    break;
                }
            }
        }
    }
    
    // for(int i = 0; i < n1+n2; i++) {
    //     cout<<a3[i]<<" ";
    // }

    return 0;
}