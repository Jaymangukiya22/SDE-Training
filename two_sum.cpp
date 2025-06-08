#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class Solution
{
public:
    vector<int> twoSum(vi &nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};
int main()
{
    Solution s;
    int n, target;
    cin >> n >> target;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi ans = s.twoSum(v, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}