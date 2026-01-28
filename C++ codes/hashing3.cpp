#include<iostream>
#include<math.h>
using namespace std;

#define table_size 10

class Hashing {
    int hashtable[table_size] = {0};

    public:
    int hashindex(int key, int size) {
        size = table_size;
        return key%table_size;
    }

    // void insert(int key) {
    //     if(hashtable[hashindex(key, table_size)] == 0)
    //     hashtable[hashindex(key, table_size)] = key;
    //     else {
    //         int temp = hashindex(key, table_size);
    //         temp++;
    //         while(temp != 0) {
    //             if(temp == hashindex(key, table_size))
    //             break;
    //             if(temp == table_size-1)
    //             temp = 0;
    //             else
    //             temp++;
    //         }
    //         if(hashtable[temp] == 0) {
    //             hashtable[temp] = key;
    //         }
    //         else
    //         cout<<"no empty place in table";
    //     }
    // }

    void insert(int key) {
        for(int i = 0; i < table_size; i++) {
            if(hashtable[(hashindex(key, table_size)+int(pow(i,2)))%table_size] == 0) {
                hashtable[(hashindex(key, table_size)+int(pow(i,2)))%table_size] = key;
                return;
            }
        }
        cout<<"No space left in table";
    }

    void del(int key) {
        for(int i = 0; i < table_size; i++) {
            if(hashtable[(hashindex(key, table_size)+int(pow(i,2)))%table_size] == key) {
                hashtable[(hashindex(key, table_size)+int(pow(i,2)))%table_size] = 0;
                return;
            }
        }
        cout<<"void deletion";
    }

    // int search(int key) {
    //     if(hashtable[hashindex(key, table_size)] == key)
    //     return 1;
    //     else {
    //         int i = hashindex(key, table_size);
    //         if(i == table_size-1) {
    //             i = 0;
    //         }
    //         else
    //         i++;
    //         while(i != hashindex(key, table_size)) {
    //             if(hashtable[i] == key)
    //             return 1;
    //             if(i == table_size-1) {
    //                 i = 0;
    //             }
    //             else
    //             i++;
    //         }
    //         return 0;
    //     }
    // }

    int search(int key) {
        for(int i = 0; i < table_size; i++) {

            if(hashtable[(hashindex(key, table_size)+int(pow(i,2)))%table_size] == key) {
                return 1;
            }
        }
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

//instead of int(pow(i, 2)) do i*i

//implement deleted index to -1
// initially empty iindex to 0
//wont interupt each other

//in search after implementing above thing stop the loop if index got 0 it means 
//it was empty since starting so insert loop could have stopped there but it didnt
//so element is not present.

//int hashindex(int key) {
//    return key % table_size;
//}