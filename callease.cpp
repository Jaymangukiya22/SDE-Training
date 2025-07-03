#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

char second_frequent(string n){
    map<char, int> freq;
    for(int i:n){
        freq[i]++;
    }
    int first = 0, second = 0;
    char a = '\0', b = '\0'; 
    for(auto i : freq){
        if(i.second>first){
            second = first;
            b = a;
            first = i.second;
            a = i.first;
        }else if(i.second>second && i.second!=first){
            second = i.second;
            b = i.first;
        }
    }
    return b;
}

int main(){
    string n;
    cin>>n;
    cout<<second_frequent(n);
}