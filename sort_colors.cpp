#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
class Solution
{
public:
    void sortColors(vi &nums)
    {
        int zero = 0, one = 0, two = 0;
        for (int n : nums)
        {
            if (n == 0)
                zero++;
            else if (n == 1)
                one++;
            else
                two++;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (zero > 0)
            {
                nums[i] = 0;
                zero--;
            }
            else if (one > 0)
            {
                nums[i] = 1;
                one--;
            }
            else
            {
                nums[i] = 2;
                two--;
            }
        }
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
    s.sortColors(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}