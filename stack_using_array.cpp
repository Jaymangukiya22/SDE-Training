#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

class Stack{
public:
    int _top, size, capacity;
    vector<int> v;
    Stack(){
        //
        _top = -1;
        size = 0;
        capacity = 5;
        // for(int i = 0; i<capacity; i++){
        //     v[i] = '\0'; //reserving
        // }
        v.resize(capacity, 0);
    }
    int top(){
        if(size>0){
            return v[_top];
        }
        cout<<"Invalid command"<<endl;
        return -1;

    }
    void pop(){
        if(size<1){
            cout<<"Nothing to pop"<<endl;
            return;
        }
        size--;
        v[_top--] = '\0';
    }
    void push(int val){
        if(size==capacity){
            cout<<"Overflow"<<endl;
            return;
        }
        size++;
        v[++_top] = val;
    }
    bool empty(){
        return size==0;
    }
    void display(){
        if (empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = _top; i >= 0; i--) {
            cout << v[i] << " ";
        }
    }

};

void solve(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.top();
    s.display();
}

int main(){
    solve();
}