#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n , int m, int maxAllowedPages) {
    int st = 1, page = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] > maxAllowedPages) {
            return false;
        }

        if(page+arr[i] <= maxAllowedPages) {
            page += arr[i];
        } else {
            st++;
            page = arr[i];
        }
    }

    return st > m ? false: true;
}

int bookAllocate(vector<int> &arr, int n , int m) {
    if(m>n) return -1;
    int sum = 0;
    for(int val: arr) {
        sum += val;
    }

    int st = 0, end = sum;
    int ans = -1;
    while(st <= end) {
        int mid = st + (end-st)/2;
        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid-1; 
        } else {
            st = mid+1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout<<"Allocate books: "<<bookAllocate(arr, n, m);
    cout<<endl;
    return 0;
}