#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int original = n;
        int sum = 0;
        int numDigits = 0;
        int temp = n;

        while (temp > 0)
        {
            temp /= 10;
            numDigits++;
        }

        temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        return sum == original;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    if (s.armstrongNumber(n))
        cout << "True\n";
    else
        cout << "False\n";
}