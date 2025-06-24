#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;
int cyclic_rotation(int n){
    return ((n-(1<<((int)floor(log2(n)))))*2)+1;
}
int main(){
    int n;
    cin>>n;
    cout<<cyclic_rotation(n);
}