#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr) {

    for(int i=0; i<arr.size()-1; i++) {
        int smallestIdx = i;

        for(int j=i+1; j<arr.size(); j++) {
            if(arr[j]<arr[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}
int main() {
    vector<int> arr = {4, 1, 2, 5, 3};

    selectionSort(arr);
    for(int val: arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}