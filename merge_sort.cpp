#include <iostream>
#include <vector>
using namespace std;

vector<int> Merge(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> ans;
    
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans.push_back(a[i++]);
        } else {
            ans.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        ans.push_back(a[i++]);
    }
    while (j < b.size()) {
        ans.push_back(b[j++]);
    }

    return ans;
}

vector<int> Merge_Sort(vector<int>& Array) {
    int n = Array.size();
    if (n <= 1) return Array;

    int mid = n / 2;
    vector<int> left(Array.begin(), Array.begin() + mid);
    vector<int> right(Array.begin() + mid, Array.end());

    left = Merge_Sort(left);
    right = Merge_Sort(right);

    return Merge(left, right);
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 3};
    
    vector<int> sorted = Merge_Sort(arr);
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
