#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums, int tar) {
    int st = 0, end = nums.size()-1;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(nums[mid] == tar) {
            return mid;
        } else if(nums[st] <= nums[mid]) {
            if(nums[st] <= tar && nums[mid] >= tar) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if(nums[mid] <= tar && nums[end] >= tar) {
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4, 5, 7, 8, 9, 12, -1, 0, 2, 3};

    cout<<"Target idx: "<<search(nums, 9)<<endl;
    return 0;
}