#include <bits/stdc++.h>
using namespace std;

int inputSize() {
    int size;
    cin >> size;
    return size;
}

vector<int> readArray(int size) {
    vector<int> a(size);
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
    return a;
}

int findMax(const vector<int>& a) {
    int big = INT_MIN;
    for (int val : a) {
        if (val > big) {
            big = val;
        }
    }
    return big;
}

vector<int> rev(const vector<int>& a) {
    vector<int> reversed = a;  // Make a copy
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

void output(int result) {
    cout << result << endl;
}

void output(const vector<int>& a) {
    for (int val : a) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int size = inputSize();
    vector<int> a = readArray(size);
    
    int maximum = findMax(a);
    output(maximum);

    vector<int> reversed = rev(a);
    output(reversed);

    return 0;
}
