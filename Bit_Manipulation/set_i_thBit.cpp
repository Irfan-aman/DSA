#include<iostream>
using namespace std;
int set_i_thBit(int n,int i){
    return n  | (1<<i); //bitmask = 1<<i 
}
int main(){
    int n,i;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Enter the ith position: ";
    cin>>i;
    cout<<"Before "<<i<<"st bit set in "<<n<<" = "<<n<<endl;
    cout<<"After "<<i<<"st bit set in "<<n<<" = "<<set_i_thBit(n,i)<<endl;
    return 0;
}