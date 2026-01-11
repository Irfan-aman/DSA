#include<iostream>
using namespace std;
int clearIthBit(int n ,int i){
    return n & ~(1<<i);
}
int main(){
    cout<<clearIthBit(5,0)<<endl;
    cout<<clearIthBit(31,0);
    return 0;
}