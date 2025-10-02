#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//display list
void display(Node* start) {
    Node* ptr;
    ptr = start;
    while(ptr != nullptr) {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

//insertion at end
void inend(Node* start, int item) {
    Node* P = new Node();
    P->data = item;
    P->next = nullptr;
    Node* ptr;
    ptr = start;
    while(ptr != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = P;
}

int main() {
    
    Node fourth{4, nullptr};
    Node third{3, &fourth};
    Node second{2, &third};
    Node first{1, &second};

    display(&first);
    cout<<endl;
    inend(&first, 5);
    display(&first);

    return 0;
}