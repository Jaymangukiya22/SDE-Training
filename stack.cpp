#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    for(int i = 0; i<n; i++){
        st.push(i);
    }
    cout<<st.top()<<endl;
    st.pop();
}