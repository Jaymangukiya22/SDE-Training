#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
class Solution {
public:
int dso_min_coins(vi &coins, int amt)
{ // dso -> double space optimized
    int n = coins.size();
    vi prev(amt + 1, -1);
    forn(i, amt + 1)
    {
        prev[i] = (i % coins[0] != 0) ? (amt + 1) : (i / coins[0]);
    }

    for (int i = 1; i < n; i++){
        for (int A = amt; A > 0; A--){
            if (A % coins[i] == 0){
                prev[A] = A / coins[i];
            }
            
            int take = INT_MAX;
            
            if (A >= coins[i]){
                take = 1 + prev[A - coins[i]];
            }

            int notTake = prev[A];
            prev[A] = min(take, notTake);
        }
    }
    return prev[amt];
}

    int coinChange(vector<int>& coins, int amount) {
        int ans = dso_min_coins(coins, amount);
        return (ans > amount ? -1 : ans);
    }
};