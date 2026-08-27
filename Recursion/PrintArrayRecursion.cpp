#include <bits/stdc++.h>

using namespace std;

    void printarr(vector<int> arr, int i , int n){
        if(i == n) return;
        // cout<<arr[i]<<" ";
        printarr(arr, i+1, n);
        cout<<arr[i]<<" ";
    }

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int n = arr.size();
    printarr(arr, 0, n);
    return 0;
}