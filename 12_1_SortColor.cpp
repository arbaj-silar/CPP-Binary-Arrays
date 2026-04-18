#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int>& color) {
    int st = 0, end = color.size()-1, mid = 0;

    while(mid <= end) {
        if(color[mid] == 0) {
            swap(color[st++], color[mid++]);
        } else if(color[mid] == 2) {
            swap(color[end--], color[mid]);
        } else {
            mid++;
        }
    }
}

int main() {
    vector<int> color = {2, 0, 1, 2, 1, 0, 2, 1, 0, 0};

    sortColor(color);
    for(int clr: color) {
        cout<<clr<<" ";
    }
    cout<<endl;
    return 0;

}