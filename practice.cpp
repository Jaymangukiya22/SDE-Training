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