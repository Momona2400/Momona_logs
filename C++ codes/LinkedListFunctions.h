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

//deleting for swapping function(not freeing the node)
void del2(Node* start, Node* q) {
    if(start == nullptr) {
        cout<<"No node in list to delete.";
    }
    else {
        Node* ptr = start;
        while(ptr->next != q) {
            ptr = ptr->next;
        }
        ptr->next = q->next;
    }
}

//swapping nodes
void swap(Node* start, Node*& ptr1, Node*& ptr2) {
    Node* x = start;
    Node* y = start;
    while(x->next != ptr1) {
        x = x->next;
    }
    while( y->next != ptr2) {
        y = y->next;
    }
    del2(start, ptr1);
    del2(start, ptr2);
    insaf(start, x, ptr2->data);
    insaf(start, y, ptr1->data);
}

//swapping data in nodes
void swap2(Node* ptr1, Node* ptr2) {
    int temp;
    temp = ptr1->data;
    ptr1->data = ptr2->data;
    ptr2->data = temp;
}

//sorting
void sort(Node* start) {
    Node* end = nullptr;
    while(end != start->next) {
        Node* ptr1 = start;
        Node* ptr2 = ptr1->next;
        while(ptr2 != end) {
            if(ptr1->data > ptr2->data) {
                swap2(ptr1, ptr2);
            }
            ptr1 = ptr1->next;
            ptr2 = ptr1->next;
        }
        end = ptr1;
    }
}

//merging two sorted list
Node* mergesort(Node* start1, Node* start2) {
    Node* ptr1 = start1;
    Node* ptr2 = start2;
    Node* ptr3 = new Node();
    Node* start3 = ptr3;
    while(ptr1 != nullptr && ptr2 != nullptr) {
        if(ptr1->data < ptr2->data) {
            ptr3->data = ptr1->data;
            ptr1 = ptr1->next;
        }
        else {
            ptr3->data = ptr2->data;
            ptr2 = ptr2->next;
        }
        ptr3->next = new Node();
        ptr3 = ptr3->next;
    }
    if(ptr1 != nullptr) {
        while(ptr1 != nullptr) {
            ptr3->data = ptr1->data;
            ptr1 = ptr1->next;
        }
    }
    if(ptr2 != nullptr) {
        while(ptr2 != nullptr) {
            ptr3->data = ptr2->data;
            ptr2 = ptr2->next;
        }
    }    
    return start3;
}