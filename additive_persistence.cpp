#include <iostream>
using namespace std;
int mp(int n) {
    int count = 0;

    while (n >= 10) { 
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  
            n /= 10;           
        }
        n = sum; 
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
