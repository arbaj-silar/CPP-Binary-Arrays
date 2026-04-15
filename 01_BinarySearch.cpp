#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int tar) {
    int st = 0, end = nums.size()-1;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(tar == nums[mid]) {
            return mid;
        } else if(tar > nums[mid]) {
            st = mid+1;
        } else {
            end = mid -1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};

    cout<<"Target Idx: "<<binarySearch(nums, 12)<<endl;
    return 0;
}