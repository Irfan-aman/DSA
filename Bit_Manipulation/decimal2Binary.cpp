#include<iostream>
#include<math.h>
using namespace std;
int dec2Binary(int x){
    int n=x;
    int ans=0;
    int mult=1;
    while(n){
        int lastDig=n%2;
        ans += mult*lastDig;
        mult *=10;
        n /=2;
    }
    return ans;
}
string decimal2Binary(int x){
    if(x==0){
        return "0";
    }
    int n=x;
    string ans="";
    while(n){
        ans = char((n%2)+'0') +ans;
        n /=2;
    }
    //return stoi(ans); //or use stoi() function which convert string into int
    return ans;  //Or return ans as a string
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Binary number of "<<n<<" is "<<decimal2Binary(n);
    return 0;
}