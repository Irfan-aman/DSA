#include<iostream>
#include<math.h>
using namespace std;
int bin2Decimal(int x){
    int n=x;
    int ans=0;
    int i=0;
    while(n){
        int lastDig=n%10;
        ans +=pow(2,i++)*lastDig;
        n /=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Decimal number of "<<n<<" is "<<bin2Decimal(n);
    return 0;
}