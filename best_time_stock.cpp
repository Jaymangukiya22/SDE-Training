#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class Solution
{
public:
    int maxProfit(vi &prices)
    {
        int m = prices[0], ans = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            m = min(m, prices[i]);
            ans = max(ans, prices[i] - m);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    vi prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    cout << s.maxProfit(prices) << endl;
    return 0;
}