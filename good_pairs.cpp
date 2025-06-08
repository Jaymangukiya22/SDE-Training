#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef unordered_map<int, int> umii;
class Solution
{
public:
    int numIdenticalPairs(vi &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 0;
        // for(int i = 0; i<nums.size()-1; i++){
        //     if(nums[i]==nums[i+1]) {
        //         count++;
        //         ans+= (count*(count-1))/2;
        //     }
        //     count = 1;
        // }
        umii count;
        for (int x : nums)
        {
            ans += count[x]++;
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
    cout << s.numIdenticalPairs(nums);
}