#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int>& arr, int target, int start, int stop) {
    if (start > stop) return -1;
    int mid = start + (stop - start) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] > target)
        return binary_search(arr, target, start, mid - 1);
    else
        return binary_search(arr, target, mid + 1, stop);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr = {3, 5, 6, 7, 9, 13, 15};

    int result = binary_search(arr, n, 0, arr.size() - 1);
    cout<<result;
}
