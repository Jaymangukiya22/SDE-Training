#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr(5);
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    vector<int> ans(5);
    int sum = 0;
    for(int i = arr.size() - 1; i >= 0; i--) {
        sum += arr[i];
        ans[i] = sum;
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
