#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {23, 35, 35, 21, 24, 23, 27, 34, 24, 35, 32};
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