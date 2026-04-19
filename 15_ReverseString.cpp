#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<string> &s) {
    int st = 0, end = s.size()-1;

    while(st < end) {
        swap(s[st++], s[end--]);
    }
}

int main() {
    vector<string> s = {"H", "E", "L", "L", "O"};

    reverse(s);
    for(string ch: s) {
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}