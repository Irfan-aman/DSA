#include <iostream>
#include <vector>
#include<queue>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    priority_queue<int,vector<int>,greater <int>> p;

    p.push(2);
    p.push(7);
    p.push(1);
    p.push(8);
    p.push(4);
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    
    return 0;
}