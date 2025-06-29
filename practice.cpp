#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

int print_rev(int n){
    if(n<0) return 0;
    cout << n << " ";
    return print_rev(--n);
}

void print(int i, int n){
    if(i > n) return;         
    cout << i << " ";
    print(i + 1, n);          
}

int main(){
    int n;
    cin>>n;
    cout <<"Ascending:"<<endl;
    print(0,n);
    cout<<"Descending:"<<endl;
    cout<<print_rev(n);
}

// class Solution {
// public:
//     vector<int> frequencySort(vector<int>& nums) {
//         unordered_map<int, int> freq;

//         for (int num : nums) {
//             freq[num]++;
//         }

//         sort(nums.begin(), nums.end(), [&](int n1, int n2) {
//             if (freq[n1] != freq[n2]) {
//                 // if freq of numbers are not equal then return in increasing
//                 // order based on freq.
//                 return freq[n1] < freq[n2];
//             } else {
//                 // otherwise sort them in decreasing order based on number in
//                 // nums.
//                 return n2 < n1;
//             }
//         });

//         return nums;
//     }
// };