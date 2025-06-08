#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class Solution
{
public:
    int removeElement(vi &nums, int val)
    {
        int i = 0;

        for (const int num : nums)
            if (num != val)
                nums[i++] = num;

        return i;
    }
};
int main()
{
    Solution s;
    int n, val;
    cin >> n >> val;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << s.removeElement(v, val);
}