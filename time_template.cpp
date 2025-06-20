#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
int lsb(int n){
    n = n^(n&(n-1));
    int count=0;
    while(n){
        count++;
        n>>=1;
    }
    return count-1;
}

int main() {
    int n = 15;
    cin >> n;

    auto start = high_resolution_clock::now();

    lsb(n);

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);

    cout << "Execution time: " << duration.count() << " nanoseconds" << endl;

    return 0;
}
