#include<iostream>
#include<numeric>
#include<unordered_set>
using namespace std;
bool pair_equals_avg(vector<int> &v){
    int n = v.size();
    if (n < 2) return false;

    long long total = 0;
    for (int num : v) total += num;

    // Average must be a valid number that can result from the sum of two integers
    if ((2 * total) % n != 0) return false;

    int targetSum = (2 * total) / n;

    unordered_set<int> seen;
    for (int num : v) {
        int complement = targetSum - num;
        if (seen.count(complement)) {
            return true;
        }
        seen.insert(num);
    }

    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    cout<<pair_equals_avg(v);
}