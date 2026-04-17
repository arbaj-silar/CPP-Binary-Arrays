#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int>& color) {
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(int i=0; i<color.size(); i++) {
        if(color[i] == 0) {
            count_0++;
        } else if(color[i] == 1) {
            count_1++;
        } else {
            count_2++;
        }
    }

    int idx = 0;
    for(int i=0; i<count_0; i++) {
        color[idx++] = 0;
    }
    for(int i=0; i<count_1; i++) {
        color[idx++] = 1;
    }
    for(int i=0; i<count_2; i++) {
        color[idx++] = 2;
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