#include<iostream>
using namespace std;

string removeOccurences(string str, string part) {
    while(str.length() >= 0 && str.find(part) < str.length()) {
        str.erase(str.find(part), part.length());
    }

    return str;
}

int main() {
    string str = "daabcaabcbc";
    string part = "abc";

    cout<<"String: "<<removeOccurences(str, part);
    cout<<endl;
    return 0;
}
            