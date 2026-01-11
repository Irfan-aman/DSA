#include<iostream>
using namespace std;
void convertToTranspose(int mat[][3],int n,int m){
    int transpose_mat[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose_mat[j][i]=mat[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int mat[2][3]={{1,2,3},{4,5,6}};
    convertToTranspose(mat,2,3);
    return 0;
}