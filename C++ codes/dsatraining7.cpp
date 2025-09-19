#include<iostream>
#include<string>
using namespace std;

int stack[100], top = -1;

void push(int val) {
    if(top == 100) 
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

int main() {
    
    string postfix;
    cin>>postfix;
    for(int i = 0; i < postfix.size(); i++) {
        if(postfix[i] >= '0' && postfix[i] <= '9') {
            push((int)postfix[i]);
            top++;
        }
        else {
            int a;
            switch (postfix[i]) {
                
                case '+' : a = stack[top-1] + stack[top];
                break;
                case '-' : a = stack[top-1] - stack[top];
                break;
                case '^' : a = stack[top-1] ^ stack[top];
                break;
                case '*' : a = stack[top-1] * stack[top];
                break;
                case '/' : a = stack[top-1] / stack[top];
                break;
                case '%' : a = stack[top-1] % stack[top];
                break;
            }
            pop();
            pop();
            push(a);
            cout<<stack[top];
        }
    }
    


    return 0;
}