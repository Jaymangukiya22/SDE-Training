#include <iostream>
#include <map>
using namespace std;
map<int, int> getPrimeFactorFrequencies(int n) {
    map<int, int> factors;
    int count = 0;
    while ((n&1) == 0) {
        factors[2]++;
        count++;
        n /= 2;
    }

    for (int i = 3; i <= n/i; i += 2) {
        while (n % i == 0) {
            factors[i]++;
            count++;
            n /= i;
        }
    }
    if (n > 2) {
        factors[n]++;
        count++;
    }
    cout<<count;
    return factors;
}

int main() {
    int n;
    cin >> n;

    map<int, int> factorMap = getPrimeFactorFrequencies(n);

    for (auto& pair : factorMap) {
        cout << pair.first << "-" << pair.second << endl;
    }

    return 0;
}
