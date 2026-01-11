#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr1[]="aman";
    char arr2[]="Irfan Al";
    cout<<strlen(arr1)<<endl;
    strncpy(arr1,arr2,5);
    cout<<arr1;
    return 0;
}