#include <iostream>
#include <string>
using namespace std;
char shiftChar(char c, int n) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + ( (c - 'a' + n + 26) % 26 );
    }
    else if (c >= 'A' && c <= 'Z') {
        return 'A' + ( (c - 'A' + n + 26) % 26 );
    }
    else {
        return c;  // non-alphabetic characters are returned unchanged
    }
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string s;
        int n;
        cin >> s >> n;

        string result;
        for (char c : s) {
            result += shiftChar(c, n);
        }

        cout << result << endl;
    }

    return 0;
}
