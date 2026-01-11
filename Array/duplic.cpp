#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[8]={3,6,4,1,5,7,8};
    n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element: "<<arr[i];
                return 0;
            }
        }
    }
    cout<<"No Duplicate element found";
    return 0;
}