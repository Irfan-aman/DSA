#include<iostream>
#include<string>
using namespace std;
int countLowerVowel(string s){
    if(s.length()==0){
        return 0;
    }
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Count of lower vowel in string s is :"<<countLowerVowel(s)<<endl;
    return 0;
}