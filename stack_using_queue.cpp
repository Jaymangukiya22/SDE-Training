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

class Stack{
    queue<int> q1, q2;
    public:
    void push(int x){
        q1.push(x);
    }
    void pop(){
        if(q1.empty()) cout<<"Stack is empty"<<endl;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        swap(q1,q2);
    }
    int top(){
        if(q1.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q2.push(top);
        q1.pop();
        swap(q1,q2);
        return top;
    }
    bool empty() {
        return q1.empty();
    }
    void print(){
        if(q1.empty()) cout<<"Stack is empty"<<endl;
        queue<int> temp = q1;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

};

void solve(){
    Stack s;
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