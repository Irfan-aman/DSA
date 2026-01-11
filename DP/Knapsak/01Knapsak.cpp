#include<iostream>
using namespace std;
int knapsak(int wt[], int val[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]<=w){
        return max(val[n-1] + knapsak(wt,val,w-wt[n-1],n-1),knapsak(wt,val,w,n-1));
    }
    else if(wt[n-1]>w){
        return knapsak(wt,val,w,n-1);
    }
    
}
int main(){
    int wt[]={1,2,3,5};
    int val[]={2,4,7,12};
    int w=5;
    cout<<"The maximum profit will be "<<knapsak(wt,val,w,4);
    return 0;
}