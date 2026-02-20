#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
    pair<int, string> p;
    pair<int, string> p2;
    p = {100, "Ananya"};
    p2 = make_pair(200, "Anamika");
    cout<<p.first<<",";
    cout<<p.second<<", ";
    cout<<p2.first<<", ";
    cout<<p2.second<<", ";    

    return 0;
}