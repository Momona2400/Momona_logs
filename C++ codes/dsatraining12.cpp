#include<iostream>
using namespace std;

struct Node {
    int info;
    Node* next;
};

void traverse(Node* start) {
    Node* ptr;
    ptr = start;
    while(ptr != nullptr) {
        cout<<(ptr->info)<<endl;
        ptr = ptr->next;
    }
}

int main() {
    Node fourth {7, nullptr};
    Node third {6, &fourth};
    Node second {5, &third};
    Node first {4, &second};

    traverse(&first);


    return 0;
}