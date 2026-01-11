#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data){
        this->data=data;
        next=prev=NULL;
    }
};
class DoublyLinkedList{
    Node* head;
    Node* tail;

    public:
     DoublyLinkedList(){
     head=tail=NULL;
     }

    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else {
          newNode->next=head;
          head->prev=newNode;
          head=newNode;
          return;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        else {
          tail->next=newNode;
          newNode->prev=tail;
          tail=newNode;
          return;
        }
    }
    void display(){
        if(head==NULL){
            cout<<"Linked List is Empty!"<<endl;
        }
        else {
           Node* temp=head;
           cout<<"NULL<- ";
           while(temp!=NULL){
             cout<<temp->data<<" <=> ";
             temp=temp->next;
           }
           cout<<"NULL"<<endl;
        }
        return;
    }
    
    void search(int key){
        if(head==NULL){
            cout<<"Linked List is Empty!"<<endl;
        }
        else {
            Node* temp=head;
            int idx=0;
            while(temp!=NULL){
                if(temp->data==key){
                    cout<<"Element is found at index "<<idx<<" !"<<endl;
                    return;
                }
                temp=temp->next;
                idx++;
            }
            cout<<"Element is not found!"<<endl;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"Linked list is empty!";
            return;
        }
        else {
            Node* temp=head;
            head=head->next;
            if(head->next!=NULL){
                head->prev=NULL;
            }
            temp->next=NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head==NULL){
            cout<<"Linked list is empty!";
            return;
        }
        else {
            Node* temp=tail;
            tail=tail->prev;
            if(tail->prev!=NULL){
                tail->next=NULL;
            }
            temp->prev=NULL;
            delete temp;
        }
    }
};
int main(){
    DoublyLinkedList List;
    List.push_front(1);
    List.push_back(2);
    List.push_back(3);
    List.push_back(4);
    List.push_back(5);
    List.pop_back();
    List.pop_front();
    List.display();
    List.search(3);
    return 0;
}