#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;
//write a function to add a node to linked list
class Node{
    public:
    int data; 
    Node *next;
    Node(){
        //
    }
    Node(int data){
        this->data = data;
    }
};
class Linkedlist{
    public:
    Node *head;
    Linkedlist(){
        //
    }
    Linkedlist(Node *head){
        this->head = head;
    }
    void printlist();
    void insertnode(int data);
    void insertnodeatend(int data);
    bool searchvalue(int val);
    void deletenode(int pos);
    void deletenode(Node *node);
};
void Linkedlist:: printlist(){//scope resolution (::)
    Node* temp = head;
    while(temp){
        cout<<"Linked list:"<<endl;
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void Linkedlist:: insertnode(int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void Linkedlist:: insertnodeatend(int data){
    Node* newnode = new Node(data);
    Node* temp = head;
    if(head==nullptr){
        
    }
}

void at_compile_time(){//without 'new' keyword
    Node node1(1);
    Node node2(2);
    node1.next = &node2;
    cout<<"Compiletime:"<<node1.data<<'\t'<<node1.next->data<<endl;
}
void playing_with_nodes(){
    Node *obj1 = new Node(1);
    Node *obj2 = new Node(2);
    obj1->next = obj2;
    cout<<"Runtime:"<<obj1->data<<'\t'<<obj1->next->data<<endl;
}
void solve(){
    playing_with_nodes();
    at_compile_time();
}
int main(){
    int t = 1;
    while(t--){
        solve();
    }
}