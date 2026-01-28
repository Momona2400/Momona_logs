#include<iostream>
#include "LinkedListFunctions.h"
using namespace std;

int main() {
    
    Node* sixth = new Node{25, nullptr};
    Node* fifth = new Node{20, sixth};
    Node* fourth = new Node{14, fifth};
    Node* third = new Node{13, fourth};
    Node* second = new Node{7, third};
    Node* first = new Node{2, second};

    Node* sixth2 = new Node{1000, nullptr};
    Node* fifth2 = new Node{100, sixth2};
    Node* fourth2 = new Node{16, fifth2};
    Node* third2 = new Node{9, fourth2};
    Node* second2 = new Node{3, third2};
    Node* first2 = new Node{1, second2};

    // swap2(first, second, fifth);
    // display(first);
    display(first);
    cout<<endl;
    // sort(first);
    // display(first);
    display(first2);
    cout<<endl;
    display(mergesort(first, first2));
    cout<<endl;

    return 0;
}