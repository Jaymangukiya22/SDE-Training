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
        this->next = nullptr;
    }
    //copy constructor
    // Node(Node* obj){//takes object as argument
    //     //this->data = obj->data;  this is not needed
    //     this = obj; // 'this' is an object itself
    // }
    Node(int data, Node *next){
        this->data = data;
        this->next = next;
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
    int length();
    void deletenode(Node *node);
};

int Linkedlist::length(){
    int length = 0;

}
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
        head = newnode;
    }
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
}

bool Linkedlist::searchvalue(int data){
    Node *temp = head;

    
}

void at_compile_time(){//without 'new' keyword
    Node node1(1);
    Node node2(2);
    node1.next = &node2;
    cout<<"Compiletime:"<<node1.data<<'\t'<<node1.next->data<<endl;
}
Node *playing_with_nodes(){
    Node *obj5 = new Node(5, nullptr);
    Node *obj4 = new Node(2, obj5);
    Node *obj3 = new Node(2, obj4);
    // Node *obj2 = new Node(2);
    Node *obj2 = new Node(2, obj3);
    Node *head = new Node(1, obj2);
    // obj1->next = obj2;
    // cout<<"Runtime:"<<obj1->data<<'\t'<<obj1->next->data<<endl;
    return head;
}
void ll_via_nodes(){//this function runtime
    Node *head = playing_with_nodes();//ask umang -> why is it printing 1 to 5??
    Linkedlist *ll = new Linkedlist(head);
    ll->printlist();
}
void playing_with_ll(){
    Linkedlist ll;//this is compiletime
    ll.printlist();
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

// User function template for C++
// class Solution {
//   public:
//     string addBinary(string s1, string s2) {
//         string result;
//         int i = s1.length() - 1;
//         int j = s2.length() - 1;
//         int carry = 0;

//         while (i >= 0 || j >= 0 || carry) {
//             int bit1 = (i >= 0) ? s1[i--] - '0' : 0;
//             int bit2 = (j >= 0) ? s2[j--] - '0' : 0;
//             int sum = bit1 + bit2 + carry;
//             result += (sum % 2) + '0';
//             carry = sum / 2;
//         }

//         reverse(result.begin(), result.end());
//         size_t first_one = result.find_first_not_of('0');
//         if (first_one != string::npos)
//             return result.substr(first_one);
//         else
//             return "0";
//     }
// };


