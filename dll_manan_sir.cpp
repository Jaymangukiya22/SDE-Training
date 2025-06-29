#include<iostream>
#include<vector>
#include<array>
#include<map>
using namespace std;

typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;

    Node()
    {
        data = '\0';
        prev = nullptr;
        next = nullptr;
    }

    Node(int data, Node *prev = nullptr, Node *next = NULL)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }

    // Node(int data)
    // {
    //     this->data = data;
    //     this->prev = this->next = nullptr;
    // }
};

class DLL
{
public:
    struct Node *head, *tail;
    int size;

    DLL()
    {
        head = tail = nullptr;
        size = 0;
    }

    DLL(Node *head)
    {
        this->head = head;
        this->tail = head;
        size = 1;
    }

    void insertNode(int data);
    void insertNode(int data, int pos);
    void length();
    void printDLLReverse();
    bool searchValue(int data);
    void deleteNode(Node *addr);
    void deleteNode(int pos);
};

void DLL::insertNode(int data)
{
    Node newNode = Node(data);
    size++;
    if (head == NULL)
    {
        head = tail = &newNode;
        return;
    }

    tail->next = &newNode;
    newNode.prev = tail;
    tail = &newNode;
}
void DLL::length()
{
    cout << size;
}

void DLL::printDLLReverse()
{
    Node *temp = tail;

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << "\n";

    // Node temp = *tail;
    // while (temp.prev)
    // {
    //     cout << temp.data << "\t";
    //     temp = *(temp.prev);
    // }
    // cout << temp.data << "\n";
}

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void playing_with_Dll()
{
    Node head = Node(1);
    DLL dll1(&head);
    // cout << dll1.head->data << "\n";
    // cout << dll1.head->prev << "\n";
    // cout << dll1.head->next << "\n";
    // cout << dll1.tail->data << "\t" << dll1.tail->prev << "\t" << dll1.tail->next->data << "\n";
    forn(i, 1)
    {
        dll1.insertNode(i + 2);
        cout << dll1.head->next->data << "\n";
        cout << dll1.head->next->prev->data << "\n";
        cout << dll1.head->next->next << "\n";
        // forn(j, i + 1)
        // {
        //     //
        // }
        //     cout << dll1.head->data << "\t" << dll1.head->prev << "\t" << dll1.head->next->data << "\n";
        //     cout << dll1.tail->data << "\t" << dll1.tail->prev << "\t" << dll1.tail->next->data << "\n";
    }
    // dll1.printDLLReverse();
    // cout << dll1.tail->data << "\n";       // 5
    // cout << dll1.tail->next << "\n";       // null
    // cout << dll1.tail->prev->data << "\n"; // 4
    // cout << dll1.head->next->data << "\n"; // 2
    // cout << dll1.head->data << "\n";       // null
}

void solve()
{
    playing_with_Dll();
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}