#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5);
    for(int i = 0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum = arr[i] + sum;
        arr[i] = sum;
    }
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
}