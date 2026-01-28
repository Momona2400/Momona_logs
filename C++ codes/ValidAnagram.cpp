#include<iostream>
#include<string.h>
using namespace std;

bool isValid(string s1, string s2) {
    int count1[26] = {0}, count2[26] = {0};
    if(s1.size() != s2.size()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] >= 65 && s1[i] <= 90) {
            count1[s1[i] - 65]++;
        }
        else {
            count1[s1[i] - 97]++;
        }
        if(s2[i] >= 65 && s2[i] <= 90) {
            count2[s2[i] - 65]++;
        }
        else {
            count2[s2[i] - 97]++;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string a = "ananya", b = "aynana";
    cout<<isValid(a, b);

    return 0;
}