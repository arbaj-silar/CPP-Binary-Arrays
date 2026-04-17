#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr) {

    for(int i=1; i<arr.size(); i++) {
        int curr = arr[i], prev = i-1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}
int main() {
    vector<int> arr = {4, 1, 2, 5, 3};

    insertionSort(arr);
    for(int val: arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}