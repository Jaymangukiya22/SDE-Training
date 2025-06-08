#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int seriesSum(int n)
    {
        // code here
        if (n == 0)
            return 0;
        int sum = 0;
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                sum += i;
            }
        }
        return sum;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.seriesSum(n) << endl;
    return 0;
}