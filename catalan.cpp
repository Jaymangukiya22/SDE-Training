// C++ program to find nth catalan number

#include <iostream>
using namespace std;

// int binomial_coeff(int n, int r){
//     r = min(r, n - r);
//     if(r<0) return 0;
//     if(r==1) return 1;
//     return binomial_coeff(n-1, r) + binomial_coeff(n-1, r-1);
// }
long long binomial_coeff(int n, int k){
    long long res = 1;
    k = min(k, n - k);
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int findCatalan(int n) {
    
    // Base case
    if (n <= 1)
        return 1;

    int res = 0;
        // res += findCatalan(i) * findCatalan(n - i - 1);
    res = (binomial_coeff(2*n, n))/(n+1);
    return res;
}

int main() {
    int n = 6;
    int res = findCatalan(n);
    cout << res;
    return 0;
}