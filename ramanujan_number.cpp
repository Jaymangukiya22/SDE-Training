#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;
int main() {
    const int LIMIT = 1e7;
    map<int, vector<pair<int, int>>> cubeSums;

    for (int a = 1; a <= cbrt(LIMIT); ++a) {
        int a3 = a * a * a;
        for (int b = a; b <= cbrt(LIMIT); ++b) {
            int sum = a3 + b * b * b;
            if (sum > LIMIT)
                break;
            cubeSums[sum].emplace_back(a, b);
        }
    }

    for (const auto& entry : cubeSums) {
        if (entry.second.size() >= 2) {
            cout << entry.first << " = ";
            for (size_t i = 0; i < entry.second.size(); ++i) {
                cout << entry.second[i].first << "^3 + " << entry.second[i].second << "^3";
                if (i != entry.second.size() - 1)
                    cout << " = ";
            }
            cout << endl;
        }
    }

    return 0;
}