#include<iostream>
using namespace std;

#define table_size 10

class Hashing {
    
    int hashtable[table_size] = {0};
    int hashindex(int key, int size) {
        size = table_size;
        return key%size;
    }

    public:
    
    void insert(int key) {
        if(hashtable[hashindex(key, table_size)] == 0) {
            
        }
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