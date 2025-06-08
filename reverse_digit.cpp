#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverseDigits(int n)
    {
        // Code here
        string num = to_string(n);
        reverse(num.begin(), num.end());
        int ans = stoi(num);
        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.reverseDigits(n) << endl;
    return 0;
}