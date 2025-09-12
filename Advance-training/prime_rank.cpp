#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

vector<int> prime_till_n(int n)
{
    vector<bool> prime(n + 1, true);

    for (int i = 2; i <= n / i; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> prime_no;
    prime_no.push_back(-1);

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            prime_no.push_back(i);
        }
    }

    return prime_no;
}

pair<bool, int> is_reverse(int n)
{
    int rev = 0, temp = n;

    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return make_pair(rev == n, rev);
}

vector<int> rank_of_prime(int n)
{
    vector<bool> is_checked(n + 1, false);
    vector<int> prime_no = prime_till_n(n);
    vector<int> p;

    for (int i = 12; i < prime_no.size(); i++)
    {

        if (i % 10 == 0)
        {
            continue;
        }

        auto rev = is_reverse(prime_no[i]);
        if (rev.first && !is_checked[rev.second])
        {
            is_checked[rev.second] = true;
            is_checked[i] = true;
            p.push_back(prime_no[i]);
            p.push_back(prime_no[rev.second]);
        }
    }

    return p;
}

int main()
{
    cout << "Prime Ranks till 10^7 are: " << endl;
    vector<int> prime_ranks = rank_of_prime(1e7);

    for (int i = 0; i < prime_ranks.size(); i++)
    {
        cout << prime_ranks[i] << " ";
    }
    cout << endl;
    cout << "Total Count: " << prime_ranks.size() << endl;
    return 0;
}