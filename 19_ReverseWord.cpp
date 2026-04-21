#include<iostream>
#include <algorithm>
using namespace std;

string reverseWord(string s) {
    reverse(s.begin(), s.end());
    string ans = "";

    for(int i=0; i<s.length(); i++) {
        string word = "";
        
        while(i<s.length() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        
        reverse(word.begin(), word.end());
        if(word.length() > 0)
        ans += " "+word;

    }

    return ans.substr(1);
}

int main() {
    string s = "Hello  World   Itachi Uchiha   ";

    cout<<"Reverse Words: "<<reverseWord(s);
    return 0;
}