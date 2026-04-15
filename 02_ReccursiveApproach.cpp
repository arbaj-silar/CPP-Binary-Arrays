#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int tar, int st, int end) {
    int mid = st + (end-st)/2;
    if(st <= end) {
        if(tar == nums[mid]) {
            return mid;
        } else if(tar > nums[mid]) {
            return binarySearch(nums, tar, mid+1, end);
        } else {
            return binarySearch(nums, tar, st, mid-1);
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};

    cout<<"Target Idx: "<<binarySearch(nums, 9, 0, nums.size()-1)<<endl;
    return 0;
}