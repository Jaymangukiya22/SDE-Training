#include <iostream>
#include <iostream>
using namespace std;
//memoised
int findCatalan(int n, vector<int> &memo) {
    if(n <= 1) return 1;
    if(memo[n]!=-1) return memo[n];
    int res = 0;
    for(int i = 0; i<n; i++)
        res += findCatalan(i, memo) * findCatalan(n - i - 1, memo);
    return memo[n]=res;
}

//tabulated

int catalan_tabulated(int n){
    vector<int> tabulation(n+1, 0);
    tabulation[0] = tabulation[1] = 1;
    for(int i = 2; i<=n ;i++){
        for(int j = 0; j<i; j++){
            tabulation[i]+= tabulation[j] + tabulation[i-j-1];
        }
    }
    return tabulation[n];
}

int main() {
    int n = 6;
    vector<int> memo(n + 1, -1);
    int res = findCatalan(n, memo);
    cout << res;
    return 0;
}