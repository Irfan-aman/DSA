#include<iostream>
using namespace std;
typedef struct node{
    int data;
    node* next;
}node;
node* createNode(int data){
    node* newnode= (node*)malloc(sizeof(node));
    if (newnode==NULL){
        cout<<"Empty ";
    }
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
int main(){
    node* head=createNode(10);
    head->next=createNode(20);
    head->next->next=createNode(30);
    cout<<head->data;
    return 0;
}