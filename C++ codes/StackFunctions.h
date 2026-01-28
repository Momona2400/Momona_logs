#include<iostream>
using namespace std;

int stack[100], top = -1;

void push(int val) {
    if(top == 99) 
    cout<<"Overflow"<<endl;
    else {
        top++;
        stack[top] = val;
    }
}

void pop() {
    if(top == -1)
    cout<<"Underflow"<<endl;
    else
    top--;
}

void show() {
    if(top == -1) {
        cout<<"Stack is empty";
    }
    else {
        cout<<"The array: "<<endl;
        for(int i = top; i >=0; i--) {
            cout<<stack[i]<<endl;
        }
    }
}