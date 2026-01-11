#include<iostream>
using namespace std;
int getiBit(int n ,int i){
    if(n & (1<<i)){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int n,i;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Enter the ith position: ";
    cin>>i;
    cout<<"The "<<i<<"th bit in "<<n <<" is "<<getiBit(n,i)<<endl;
    return 0;
}