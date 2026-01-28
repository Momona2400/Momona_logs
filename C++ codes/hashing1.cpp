#include<iostream>
using namespace std;

#define table_size 10

class Hashing {
    int hashtable[table_size] = {0};

    public:
    int hashindex(int key, int size) {
        size = table_size;
        return key%table_size;
    }
    void insert(int key) {
        hashtable[hashindex(key, table_size)] = key;
    }
    void del(int key) {
        if(hashtable[hashindex(key, table_size)] == 1)
        hashtable[hashindex(key, table_size)] = 0;
        else
        cout<<"void deletion";
    }
    int search(int key) {
        if(hashtable[hashindex(key, table_size)] == key)
        return 1;
        else
        return 0;
    }
};

int main() {
    Hashing h;
    h.insert(70);
    h.insert(83);
    h.insert(18);
    h.insert(17);
    h.insert(34);
    cout<<h.search(34);

    return 0;
}