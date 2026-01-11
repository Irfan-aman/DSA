#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

static int idx=-1;

Node* preorderTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root=new Node(preorder[idx]);
    root->left=preorderTree(preorder);
    root->right=preorderTree(preorder);
    return root;
}
void printPreorderTree(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorderTree(root->left);
    printPreorderTree(root->right);
    return;
}
int main(){
    vector<int> preorder={3,6,-1,-1,8,4,-1,-1,5,-1,-1};
    Node* root=preorderTree(preorder);
    // cout<<root->data<<" ";
    // cout<<root->left->data<<" ";
    // cout<<root->right->data<<" ";
    printPreorderTree   (root);
    return 0;
}