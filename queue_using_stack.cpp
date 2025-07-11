#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
#include<stack>
#include<queue>

using namespace std;

class Queue{
    stack<int> s1, s2;
    public:
    void push(int x){
        s1.push(x);
    }
    void pop(){
        if(s1.empty()) cout<<"Queue is empty"<<endl;
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        s1.pop();
        swap(s1,s2);
    }
    int top(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        int top = s1.top();
        s2.push(top);
        s1.pop();
        swap(s1,s2);
        return top;
    }
    bool empty() {
        return s1.empty();
    }
    void print(){
        if(s1.empty()) cout<<"Queue is empty"<<endl;
        stack<int> temp = s1;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

};

void solve(){
    Queue s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();  
    s.pop();                 
    s.print();  
    s.pop();                 
    s.pop();  
    s.print();                      

}

int main(){
    solve();
    return 0;
}