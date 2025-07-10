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
    queue<int> q1;
    public:
    int size = 0;
    void push(int x){
        q1.push(x);
        int size = q1.size()-1;
        while(size--){
            int top = q1.front();
            q1.pop();
            q1.push(top);
        }
    }
    void pop(){
        if (q1.empty()) {
            cout << "Stack is empty\n";
        }
        q1.pop();
    }
    int top(){
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
    void print(){
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