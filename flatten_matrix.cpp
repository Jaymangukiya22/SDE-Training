#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<vector<int>> arr, int k, int l, int r, int n){
    if (l > r) return -1;
    int mid = (l+r)/2;
    int i = mid/n;
    int j = mid%n;
    if(k==arr[i][j]) return mid;
    if(k<arr[i][j]) return binary_search(arr, k, l, mid-1, n);
    if(k>arr[i][j]) return binary_search(arr, k, mid+1, r, n);
    return -1;
}
int flatten_matrix(vector<vector<int>> arr, int n){
    int row = arr.size(), col = arr[0].size();
    int l = 0, r = (row*col)-1;
    return binary_search(arr, n, l, r, col);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    int ans = flatten_matrix(arr,n);
    cout<<ans;
}