#include<iostream>
using namespace std; 
void printNtwoOne(int x,int n){
    if(n==1){
        cout<<n<<" ";
        return;
    } 
    printNtwoOne(1,n-1);
    cout<<n<<" ";
}
int main(){
    printNtwoOne(1,5);
    return 0;
}


// long binForm=n;
//         double ans=1;
//         if(x==0) return 0;
//         if(x==1 || n==0) return 1;
//         if(n<0){
//             x=1/x;
//             binForm=-binForm;
//         }

//         while(binForm>0){
//             if(binForm %2 ==1){
//                 ans *=x;
//             }
//             x *=x;
//             binForm /=2;
//         }
//         return ans;