#include <iostream>
using namespace std;
int mp(int n) {
    int count = 0;

    while (n >= 10) { 
        int product = 1;
        while (n > 0) {
            product *= n % 10;  
            n /= 10;           
        }
        n = product; 
        count++;  
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cout << mp(n) << endl;
    return 0;
}
