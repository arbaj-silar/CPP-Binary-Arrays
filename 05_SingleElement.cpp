#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums) {
    int n = nums.size();
    int st = 0, end = n-1;
    if(n == 1) return nums[0];

    while(st <= end) {
        int mid = st + (end-st)/2;
        
        if(mid == 0 && nums[st] != nums[st+1]) return nums[st];
        if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[n-1];
        if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) {
            return nums[mid];
        } 
        
        if(mid%2 == 0) {
            if(nums[mid] != nums[mid-1]) {
                st = mid+1;
            } else {
                end = mid -1;
            }
        } else {
            if(nums[mid] != nums[mid-1]) {
                end = mid -1;
            } else {
                st = mid+1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 7, 11, 11};

    cout<<"Single Element: "<<singleNonDuplicate(nums);
    return 0;
}