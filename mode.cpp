#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 3, 3, 6, 4, 1, 3, 6, 3};
    map<int, int> mode;
    int max_freq = 0;
    int ans;
    for (auto x : v)
    {
        mode[x]++;
    }
    for (auto x : mode)
    {
        max_freq = max(max_freq, x.second);
    }
    for (auto [key, freq] : mode)
    {
        if (freq == max_freq)
        {
            ans = key;
        }
    }
    cout << ans << endl;
    return 0;
}