#include<iostream>
#include"StackFunctions.h"
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n !=0) {
        push(n%16);
        n /= 16;
    }
    while(top > -1) {
        if(stack[top] < 10) {
            cout<<stack[top];
        }
        else if(stack[top] == 10) {
            cout<<"A";
        }
        else if(stack[top] == 11) {
            cout<<"B";
        }
        else if(stack[top] == 12) {
            cout<<"C";
        }
        else if(stack[top] == 13) {
            cout<<"D";
        }
        else if(stack[top] == 14) {
            cout<<"E";
        }
        else if(stack[top] == 15) {
            cout<<"F";
        }
        pop();
    }

    return 0;
}