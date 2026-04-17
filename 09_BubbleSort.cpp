#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr) {

    for(int i=0; i<arr.size()-1; i++) {
        bool isSwap = false;
        
        for(int j=0; j<arr.size()-i-1; j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j+1], arr[j]);
                isSwap = true;
            }
        }

        if(!isSwap) {
            return;
        }
    }
}
int main() {
    vector<int> arr = {4, 1, 2, 5, 3};

    bubbleSort(arr);
    for(int val: arr) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}