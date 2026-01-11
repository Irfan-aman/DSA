#include<iostream>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
    cout<<a<<" "<<*ptr<<endl;
    int* p=new int (a);
    *ptr=7;
    *p=5;
    cout<<*p<<" "<<a;
    return 0;
}