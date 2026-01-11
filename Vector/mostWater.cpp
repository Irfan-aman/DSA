#include<iostream>
using namespace std;
int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
    int low=0 , high=sizeof(height)/sizeof(int) -1;
    int maxArea=0;
    while(low<high){
        int area= (high-low) * min( height[low],height[high] );
        maxArea= max (maxArea,area);
        if(height[low]<height[high]){
            low++;
        } else {
            high--;
        }
    }
    cout<<"Maximum water contained in the array height = "<<maxArea<<endl;
    
    return 0;
}