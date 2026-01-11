#include<iostream>
using namespace std;
int main(){
    int A[7]={3,6,-8,7,3,4,-9};
    int maxArr=INT_LEAST32_MIN ;
    int CurrSum=0;
    for(int i=0;i<7;i++){
        CurrSum +=A[i];
        maxArr= max(maxArr,CurrSum);
        if(CurrSum<0){
            CurrSum=0;
        }
    }
    cout<<"Max Sub Array = "<<maxArr;
    return 0;
}