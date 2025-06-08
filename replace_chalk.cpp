#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
class Solution
{
public:
    int chalkReplacer(vi &chalk, int k)
    {
        ll s = accumulate(chalk.begin(), chalk.end(), 0LL);
        k %= s;
        // for (int i = 0;; ++i) {
        //     if (k < chalk[i]) {
        //         return i;
        //     }
        //     k -= chalk[i];
        // }/

        for (int i = 0; i < chalk.size(); i++)
        {
            if (chalk[i] > k)
                return i;

            k -= chalk[i];
        }
        return 0;
    }
};
int main()
{
    Solution s;
    int n, k;
    cin >> n >> k;
    vi chalk(n);
    for (int i = 0; i < n; i++)
    {
        cin >> chalk[i];
    }
    cout << s.chalkReplacer(chalk, k) << endl;
    return 0;
}