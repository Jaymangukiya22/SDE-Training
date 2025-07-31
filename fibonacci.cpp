// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n<2) return n;
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fibonacci(n);
// }

#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int>& memo) {
    if (n < 2) return n; // standard base cases: 0 and 1

    if (memo[n] != -1) return memo[n]; // return cached value

    // compute and store
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n;
    cin >> n;

    vector<int> memo(n + 1, -1); // initialize memo with -1 (not computed)
    cout << fibonacci(n, memo);
    return 0;
}
