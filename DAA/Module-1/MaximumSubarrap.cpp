#include<iostream>
#include<limits.h>
using namespace std;
// Kadane's algorithm(Naive Approach) takes O(n^2) Time Complexity.
void mss(int a[],int n){
    int maxsum=INT_MIN;
    int s,t;  //INT_MIN stores the least
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            if(sum>maxsum){
               maxsum=sum;
                s=i;
                t=j;
             }
         }
    }
    cout<<"Indices of Max Subarray Sum:"<<s<<" "<<t<<endl;
    cout<<"The maximum subarray is:"<<maxsum<<endl;
}


int main(){

   // int a[]={-2,-3,4,-1,-2,1,5,-3};
    int a[]={-3,-8,1,-2,1,5,-3,-4,3,10,-2,4,1};
    int n = sizeof(a)/sizeof(int);
    mss(a,n);
    return 0;
}