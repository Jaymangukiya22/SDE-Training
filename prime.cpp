#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        // code here
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.isPrime(n);
}