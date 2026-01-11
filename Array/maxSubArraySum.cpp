#include<iostream>
using namespace std;
int maxSubArraySum1(int arr[],int n){
    int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum +=arr[j];
            cout<<currSum<<", ";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
        
    }
    cout<<"Max Sub Array Sum =" <<maxSum;
}
int main(){
    int arr[]={2,-4,6,3,-5,8,-4};
    int n=sizeof(arr)/sizeof(int);
    maxSubArraySum1(arr,n);
    return 0;
}