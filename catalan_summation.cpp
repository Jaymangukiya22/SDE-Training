// C++ program to find nth catalan number

#include <iostream>
using namespace std;

int summation(int n){//recursion
    int ans = 0;
    if(n<2) return 1;
    for(int i = 0; i<n; i++){
        ans += summation(i)*summation(n-i-1);
    }
    return ans;
}
int memo(int n, vector<int> &mem){
    if(mem[n]!=-1) return mem[n];
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += memo(i, mem)*memo(n-i-1, mem);
    }
    mem[n] = ans;
    return mem[n];
}

int findCatalan(int n) {
    
    // Base case
    if (n <= 1)
        return 1;
    vector<int> mem(n+1, -1);
    int res = 0;
        // res += findCatalan(i) * findCatalan(n - i - 1);
    // res = summation(n);
    res = memo(n, mem);
    return res;
}

int main() {
    int n = 6;
    int res = findCatalan(n);
    cout << res;
    return 0;
}