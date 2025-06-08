#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    bool isPalindrome(int n)
    {
        // Code here.
        string str = to_string(n);
        reverse(str.begin(), str.end());
        int ans = stoi(str);
        return ans == n;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.isPalindrome(n) << endl;
    return 0;
}