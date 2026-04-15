#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n , int m, int maxAllowedTime) {
    int painter = 1, time = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] > maxAllowedTime) {
            return false;
        }

        if(time+arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }

    return painter <=  m;
}

int minTimeToPaint(vector<int> &arr, int n , int m) {
    if(m>n) return -1;
    int maxVal = INT32_MIN, sum = 0;
    for(int val: arr) {
        maxVal = max(maxVal, val);
        sum += val;
    }

    int st = maxVal, end = sum;
    int ans = -1;
    while(st <= end) {
        int mid = st + (end-st)/2;
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid-1; 
        } else {
            st = mid+1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout<<"Minimum Time: "<<minTimeToPaint(arr, n, m);
    cout<<endl;
    return 0;
}