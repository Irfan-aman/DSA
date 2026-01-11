#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insert(stack<int>& s,int k){
    if(s.size()==0){
        s.push(k);
        return;
    }
    int t=s.top();
    s.pop();
    insert(s,k);
    s.push(t);
    return;
}
void revStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t=s.top();
    s.pop();
    revStack(s);
    insert(s,t);    
    return ;
}
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    s.push(6);
    s.push(3);
    s.push(2);
    s.push(9);
    s.push(1);
    s.push(7);
    
    printStack(s);
    revStack(s);
    printStack(s);
    return 0;
}