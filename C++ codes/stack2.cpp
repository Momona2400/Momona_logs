#include<iostream>
#include"StackFunctions.h"
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n !=0) {
        push(n%8);
        n /= 8;
    }
    while(top > -1) {
        cout<<stack[top];
        pop();
    }

    return 0;
}