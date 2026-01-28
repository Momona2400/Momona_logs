#include<iostream>
#include"LinkedListFunctions.h"
using namespace std;

//copy of list
void copy(Node* start, Node*& start2) {
    start2 = start;
    Node* ptr = start;
    Node* ptr2 = start;
    ptr = ptr->next;
    while(ptr != nullptr) {
        ptr2->next = new Node {ptr->data, nullptr};
        ptr2 = ptr2->next;
        ptr = ptr->next;
    }
}

int main() {
    
    Node* sixth = new Node{6, nullptr};
    Node* fifth = new Node{5, sixth};
    Node* fourth = new Node{4, fifth};
    Node* third = new Node{3, fourth};
    Node* second = new Node{2, third};
    Node* first = new Node{1, second};

    Node* first2;

    display(first);
    cout<<endl;
    copy(first, first2);
    display(first2);


    return 0;
}