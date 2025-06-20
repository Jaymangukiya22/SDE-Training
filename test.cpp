#include <iostream>
using namespace std;

// Function to check if the ith bit is set
bool isBitSet(int num, int i) {
    return (num & (1 << i)) != 0;
}

// Function to set the ith bit
int setBit(int num, int i) {
    return num | (1 << i);
}

// Function to clear the ith bit
int clearBit(int num, int i) {
    return num & ~(1 << i);
}

// Function to toggle the ith bit
int toggleBit(int num, int i) {
    return num ^ (1 << i);
}

// Function to count number of set bits using Brian Kernighan's Algorithm
int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);  // Clear the least significant bit set
        count++;
    }
    return count;
}

int main() {
    int num = 29; // Binary: 0001 1101
    int bitPosition = 3;

    cout << "Original number: " << num << " (Binary: 0001 1101)" << endl;

    cout << "Is bit " << bitPosition << " set? " << (isBitSet(num, bitPosition) ? "Yes" : "No") << endl;
    cout << "After setting bit " << bitPosition << ": " << setBit(num, bitPosition) << endl;
    cout << "After clearing bit " << bitPosition << ": " << clearBit(num, bitPosition) << endl;
    cout << "After toggling bit " << bitPosition << ": " << toggleBit(num, bitPosition) << endl;
    cout << "Number of set bits in " << num << ": " << countSetBits(num) << endl;

    return 0;
}
