#include <iostream>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        std::cout << "Stack Overflow\n";
        return;
    }
    top++;
    stack[top] = value;
    std::cout << "Pushed " << value << " at position " << top << "\n";
}

void push()
{
}

void pop()
{
    if (top < 0) {
        std::cout << "Stack Underflow\n";
        return;
    }
    std::cout << "Popped " << stack[top] << " from position " << top << "\n";
    top--;
}

void display() {
    if (top < 0) {
        std::cout << "Stack is empty\n";
        return;
    }
    std::cout << "Current Stack:\n";
    for (int i = top; i >= 0; i--)
        std::cout << stack[i] << " ";
    std::cout << "\n";
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    push(40);
    push(50);
    push(60);  // Will trigger overflow
    display();
    return 0;
}
