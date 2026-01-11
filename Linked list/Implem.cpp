#include<iostream>
using namespace std;
typedef struct Node
 { 
int data; 
struct Node* next; 
} Node; 
Node* createNode(int data) 
{ 
Node* newNode = (Node*) malloc(sizeof(Node)); 
if (!newNode) 
{ 
printf("Memory error\n"); 
exit(1); 
} 
newNode->data = data; 
newNode->next = NULL; 
return newNode; 
}
void traverseList(Node* head) 
{ 
Node* current = head; 
while (current != NULL) 
{ 
cout<<current->data<<"-> "; 
current = current->next; 
} 
printf("NULL\n"); 
}
int main() 
{ 
Node* head = createNode(10); 
head->next = createNode(20); 
head->next->next = createNode(30); 
printf("Linked List: "); 
traverseList(head); 
return 0; 
}
