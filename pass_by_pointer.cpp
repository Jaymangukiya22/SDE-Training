#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;
int pass_by_pointer(vector<int> *v){//need to dereference
    //
    for(int i = 0; i<(*v).size(); i++){
        cout<<(*v)[i]<<endl;//this will print the values
        cout<<(v+i)<<endl;//this will print the address
    }
}
int main(){
    // int n;
    // cin>>n;
    vector<int> v = {1,2,3,4,5};
    pass_by_pointer(&v);
}