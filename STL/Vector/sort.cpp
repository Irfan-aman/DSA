#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,8,6,1,7,4,9,4,2,5,4};
    int n=sizeof(arr)/sizeof(int);//for ascending order
    //sort(arr,arr+n,greater<int>());//for descending order
    sort(arr,arr+n);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}