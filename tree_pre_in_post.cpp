#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void anyOrder(TreeNode* root, string type) {
    if (root == NULL) return;
    if(type=="pre"){
        cout<<root->val<<"\t";
    }
    anyOrder(root->left, type);
    if(type=="in"){
        cout<<root->val<<"\t";
    }
    anyOrder(root->right, type);
    if(type=="post"){
        cout<<root->val<<"\t";
    }
}

int main() {
    // Creating the tree:
    //         1
    //        /  \
    //       2    3
    //      / \  / \
    //     4  5 6   7

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    string type;
    cin>>type;
    anyOrder(root, type);
    
    return 0;
}


/*
height of tree
int height(TreeNode* root){
    if(!root) return 0;
    if(!root->left && !root->right) return 0;
    return 1+max(height(root->left), height(root->right));
}
*/