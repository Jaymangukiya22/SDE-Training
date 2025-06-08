#include <bits/stdc++.h>
using namespace std;
void populate_increment(map<int, int> &m)
{
    m[0] = 1;
    m[1] = 2;
    m[2] = 3;
}
void print_increment(map<int, int> &m)
{
    map<int, int>::iterator itr;
    // for (itr = m.begin(); itr != m.end(); itr++)
    // {
    //     pair<int, int> p = *itr;
    //     int key = (*itr).first;
    //     int value = (*itr).second;
    //     cout << key << " " << value << endl;
    // }
    for (pair<int, int> p : m) // (auto p : m) //or structured key bindings (auto [key, value] : m)
    {
        cout << p.first << ":" << p.second << endl;
    }
}
int main()
{
    map<int, int> increment;
    populate_increment(increment);
    print_increment(increment);
}
