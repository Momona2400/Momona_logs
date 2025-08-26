#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int x[n], y[n], z[n];
    float sum = 0; 
    
    for(int i = 0; i < n; i++) {
        cin>>x[i]>>y[i]>>z[n];
    }

    for(int i = 0; i < n; i++) {
        if(x[i+1] == x[i]) {
            if(y[i+1] == y[i]) {
                sum += (11/21)*(z[i+1]-z[i])/0.866;
            }
            else if(z[i+1] == z[i]) {
                sum += (11/21)*(y[i+1]-y[i])/0.866;
            }
        }
        else if(y[i+1] == y[i]) {
            if(z[i+1] == z[i]) {
                sum += (11/21)*(x[i+1]-x[i])/0.866;
            }
        }
        else {
            
        }
    }

    return 0;
}