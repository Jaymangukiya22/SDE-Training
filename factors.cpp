#include <iostream>
#include <map>
using namespace std;
map<int, int> getPrimeFactorFrequencies(int n) {
    map<int, int> factors;
    while (n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 2) {
        factors[n]++;
    }

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
