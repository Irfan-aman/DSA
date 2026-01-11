#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    };
}
    Node* createNode(Node* root,int data){
        if(root==NULL){
            root=new Node(data);
            return root;
        }
        else if(data < root->data ){
            root->left=createNode(root->left,data);
        }
        else root->right=createNode(root->right,data);

        return root;
    }
    void takeInput(int data){
        int data;
        cin>>data;
        while(data!=-1){
            root=createNode(root,data);
            cin>>data;
        }
    }



int main(){
    Node* root=NULL;
    cout<<"Enter the data to create BST: ";
    takeInput(root);

    return 0;

}