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

//insertion at begining
void inbeg(Node*& start, int item) {
    Node* p = new Node();
    p->data = item;
    p->next = start;
    start = p;
}

//insert before q
void insbf(Node* start, Node* q, int item) {
    Node* p = new Node();
    p->data = item;
    p->next = q;
    Node* ptr;
    ptr = start;
    while(ptr->next != q) {
        ptr = ptr->next;
    }
    ptr->next = p;

}

//insert after q
void insaf(Node* start, Node* q, int item) {
    Node* p = new Node();
    p->data = item;
    Node* ptr;
    ptr = start;
    while(ptr != q) {
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next = p;

}

//insertion at end
void inend(Node*& start, int item) {
    Node* p = new Node();
    p->data = item;
    p->next = nullptr;
    if(start == nullptr) {
        start = p;
    }
    else {
        Node* ptr;
        ptr = start;
        while(ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = p;
    }
}

//delete a node
void del(Node* start, Node* q) {
    if(start == nullptr) {
        cout<<"No node in list to delete.";
    }
    else {
        Node* ptr = start;
        while(ptr->next != q) {
            ptr = ptr->next;
        }
        ptr->next = q->next;
        free(q);
    }
}

//inear search
void search(Node* start, int item) {
    if(start == nullptr) {
        cout<<"Emply list";
    }
    else {
        Node* ptr = start;
        while(ptr != nullptr) {
            if(ptr->data == item) {
                cout<<"Item present";
                break;
            }
            ptr = ptr->next;
        }
        if(ptr == nullptr) {
            cout<<"Item not present.";
        }
    }
}