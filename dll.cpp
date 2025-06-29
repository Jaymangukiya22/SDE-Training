#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>

using namespace std;

struct Node{//struct is used when cross object interaction is less, otherwise we prefer to use classes

    int data;
    Node* prev;
    Node* next;
    Node(){
        data = '\0';//if we convert NULL to integer the value will be '\0'
        prev = nullptr;
        next = nullptr;
    }

    Node(int data, Node* prev = nullptr, Node* next = nullptr){
        this->data = data;
        this->prev = prev;
        this->next = next;
    }

    // Node(int data){
    //     this->data = data;
    // }
};

class dll{
    public:
    struct Node *head, *tail;
    int size;
    dll(){
        head = tail = nullptr;
        size = 0;
    }
    dll(Node* head){
        this->head = head;
        this->tail = head;
        size = 1;
    }
    void insertNode(int data);
    void insertNode(int data, int pos);
    int length();
    void printList();
    bool searchValue(int data);
    void deleteNode(Node* adr);
};

void dll::insertNode(int data){
    Node newnode = Node(data); //or we can go with Node* newnode = new Node(data)
    //here in compile time, we will pass entire object instead of its address
    if(head == nullptr){
        head = tail = &newnode;//head is a pointer so, we need to pass the address of 'newnode'
        return;
    }
    tail->next = &newnode;
    newnode.prev = tail;
    tail = &newnode;

}

bool dll::searchValue(int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val) return true;
        temp = temp->next;
    }
    return false;
}

void dll::deleteNode(Node* adr){
    Node *temp = head;
    
}

void dll::printList(){
    Node* temp = tail;//printing in reverse order
    while (temp)
    {
        cout<<temp->data<<endl;
        temp = temp->prev;
    }   
}

int main(){
    int n;
    cin>>n;
}