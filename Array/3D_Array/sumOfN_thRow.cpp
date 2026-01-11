#include<iostream>
using namespace std;
int sumofnthrow(int mat[][3],int n,int m,int row){
    int sum=0;
    int i=row-1;
    while(i==row-1){
        for(int j=0;j<m;j++){
            sum +=mat[i][j];
        }
        i++;
    }
    return sum;
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=2;
    cout<<"Sum of "<<row<<"th row element ="<<sumofnthrow(mat,3,3,row);
    return 0;
}