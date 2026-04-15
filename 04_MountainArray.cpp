#include<iostream>
#include<vector>
using namespace std;

int peakIdx(vector<int> &nums) {
    int st = 1, end = nums.size()-2;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) {
            return nums[mid];
        } else if(nums[mid] < nums[mid-1]) {
            end = mid-1;
        } else {
            st = mid+1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 5, 7, 8, 9, 12, 15, 21, 43, 3, 0, -1};

    cout<<"Peak Idx value: "<<peakIdx(nums)<<endl;
    return 0;
}