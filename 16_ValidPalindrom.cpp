#include<iostream>
using namespace std;

bool isAlphaNum(char ch) {
    if((tolower(ch) >= 'a' && tolower(ch) <= 'z') || (ch >= '0' && ch <= '9')) {
        return true;
    }

    return false;
}

bool validPalindrome(string str) {
    int st = 0, end = str.size()-1;

    while(st <end) {
        if(!isAlphaNum(!str[st])) {
            st++;
            continue;
        }
        if(!isAlphaNum(!str[end])) {
            end--;
            continue;
        }

        if(tolower(str[st]) != tolower(str[end])) {
            return false;
        }

        st++; end--;
    }

    return true;
}

int main() {
    string str = "s@#Car^RA*cs";

    cout<<"Palindrome: "<<validPalindrome(str);
    cout<<endl;
    return 0;
}
            