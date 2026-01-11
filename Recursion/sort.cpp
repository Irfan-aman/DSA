#include<iostream>
#include<vector>
using namespace std;
void Insert(vector<int> &v,int elem){
        if(v.size()==0 || v[v.size()-1]<=elem){
            v.push_back(elem);
            return;
        }
        int val=v[v.size()-1];
        v.pop_back();
        Insert(v,elem);
        v.push_back(val);
        return;

    }
void Sort(vector<int> &v){
    if(v.size()<=1){
        return;
    }
    int elem=v[v.size()-1];
    v.pop_back();
    Sort(v);
    Insert(v,elem);
    return;
}
int main(){
    vector<int> v={2,4,1,8,6,5};
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    Sort(v);
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}