#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
// typedef for(int i = 0; i < n; i++) forn;
class Solution
{
public:
    vi getConcatenation(vi &nums)
    {
        vi ans(2 * nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vi ans = s.getConcatenation(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}