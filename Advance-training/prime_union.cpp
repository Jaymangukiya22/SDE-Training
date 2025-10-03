#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
#include<set>
#include<chrono>

using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            //char is 1 byte unsigned integer (ascii)
            {
                prime[i] = false;
            }
        }
    }
    return prime;
}

int main(){
    int n, max_val = INT_MIN;
    vector<bool> sieve_arr;
    // vector<pair<int, int>> ranges;
    vector<int> prefix(1e6, 0);
    cin>>n;
    while(n--){
        int li, ri;
        cin>>li>>ri;
        // ranges.push_back({li, ri});
        prefix[li]+=1;
        prefix[ri+1] -= 1;
        max_val = max(max_val, ri);
    }
    // vector<int> prefix(max_val+2, 0);
    // for(auto i: ranges){
    //     prefix[i.first] +=1;
    //     prefix[i.second+1] -=1; 
    // }

    auto start = chrono::high_resolution_clock::now();
    for(int i = 1; i<=max_val; i++){
        prefix[i] += prefix[i-1];
    }

    sieve_arr = sieve(max_val);
    for(int i = 2; i<=max_val; i++){
        if(sieve_arr[i] && prefix[i]>0){
            cout<<i<<endl;
        }
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> duration = end - start;
    cout << "Execution time: " << duration.count() << " ms.\n";

}
