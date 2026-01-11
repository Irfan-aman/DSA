#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=15;
    vector<int> v={1,6,2,5,9,5,2,6};
    cout<<*(max_element(v.begin(),v.end()))<<endl;
    cout<<*(min_element(v.begin(),v.end()))<<endl;
    cout<<binary_search(v.begin(),v.end(),45)<<endl;
    cout<< __builtin_popcount(1023) ;
    return 0;
}