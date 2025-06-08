#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int alternateDigitSum(int n)
    {
        // int temp = 1;
        // int digits = 0;
        // while(n>0){
        //     temp/=10;
        //     digits++;
        // }
        int num, sum = 0;
        string str = to_string(n);
        for (int i = 0; i < str.length(); i++)
        {
            num = str[i] - '0';
            if (i % 2 != 0)
            {
                num *= -1;
            }
            sum += num;
            // temp++;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    cout << s.alternateDigitSum(n);
}