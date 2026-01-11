#include<iostream>
using namespace std;
bool chechPowerOf2(int n){
    if( (n&(n-1))==0 ){
        return true;
    }else return false;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<chechPowerOf2(n);
    return 0;
}