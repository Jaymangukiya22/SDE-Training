#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n % 2 == 0)
            return n;
        else
            return 2 * n;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.smallestEvenMultiple(n);
}