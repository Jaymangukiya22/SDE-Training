#include<iostream>
#include<array>
#include<string>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> v(n + 1);
    for (int i = 0; i < queries.size(); i++) {
        v[queries[i][0] - 1] += queries[i][2];
        v[queries[i][1]] -= queries[i][2];
    }

    long sum = 0;
    long maxSum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        maxSum = std::max(maxSum, sum);
    }

    return maxSum;
}
int main() {
    int n, m;
    cin >> n>> m;

    vector<vector<int>> queries(m, vector<int>(3));
    for (int i = 0; i < m; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    long result = arrayManipulation(n, queries);
    cout << result << endl;

    return 0;
}
