#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            //char is 1 byte unsigned integer (ascii)
            {
                prime[i] = false;
            }
        }
    }
    vector<int> res;
    res.push_back(0);
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            res.push_back(p);
        }
    }
    return res;
}
int reverse_num(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int n = 1e4;
    vector<int> prime = sieve(n);
    int total = prime.size();
    cout << "total : " << total << endl;
    int count = 0;
    vector<int> result;

    for (int index = 12; index < total; index++)
    {
        int reverseindex = reverse_num(index);
        if (reverseindex > total)
        {
            continue;
        }
        if (index == reverseindex)
        {
            continue;
        }
        int prime_num_at_index = prime[index];
        int prime_num_at_rev_index = prime[reverseindex];
        if (prime_num_at_index == reverse_num(prime_num_at_rev_index))
        {
            cout << index << " : " << prime[index] << endl;
            count++;
        }
    }
    cout << count;
}