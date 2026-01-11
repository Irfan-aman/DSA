#include <iostream>
#include <cstring>
using namespace std;
void toupper(char word[],int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else {
            word[i]=ch-'a'+'A';
        }
    }
    
}
int main(){
    // char ch='a';
    // char ch2='\n';
    // char ch3='\0';
    // cout<<ch<<endl;
    // cout<<ch2<<endl;
    // cout<<ch3<<endl;
    // char arr[]={'a','m','a','n','\0'};
    // cout<<arr<<endl;
     char arr1[]="Irfan";
    // for(int i=0;i<10;i++){
    //     cout<<arr1[i]<<" ";
    // }
    cout<<endl;
    toupper(arr1,strlen(arr1));
    cout<<arr1;
    cout<<arr1[2]-'A';
    return 0;
}