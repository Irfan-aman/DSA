#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void delMidElem(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int t=s.top();
    s.pop();
    delMidElem(s,k-1);
    s.push(t);
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
    int k=  (s.size())/2 +1;
    delMidElem(s,k);
    printStack(s);
    return 0;
}