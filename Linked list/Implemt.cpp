#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
class LinkedList{
    Node* head;
    Node* tail;

    public:
     LinkedList(){
     head=NULL;
     tail=NULL;
     }

    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        else {
          newNode->next=head;
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
           while(temp!=NULL){
             cout<<temp->data<<"->";
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
};
int main(){
    LinkedList List;
    List.push_front(1);
    List.push_back(2);
    List.push_back(3);
    List.push_back(4);
    List.push_back(5);
    List.display();
    List.search(3);
    return 0;
}

//Reverse the linked list , leetcode problem
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* next = NULL;
//         while(curr!=NULL){
//             next=curr->next;
//             curr->next=prev;
//               prev=curr;
//               curr=next;
//         }
//         return prev;
//     }
// };