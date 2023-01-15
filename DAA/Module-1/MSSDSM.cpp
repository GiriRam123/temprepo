#include<iostream>
using namespace std;
//T(n)=2T(n/2)+n
//T(n)=O(n log n)
int findlhs(int*a,int l,int m){
    maxsum=INT_MIN;
    sum=0;
    for(int i=m;i>=1;i--){
        sum=sum+a[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        return maxsum;
    }
}
int findlhs(int*a,int l,int m){
        maxsum=INT_MIN;
   int sum=0;
    for(int i=m;i<=h;i--){
        sum=sum+a[i];
        if(sum>maxsum){
            maxsum=sum;
           } 
           return maxsum;
    }
}

int mssDC(int *a,int l,int h)
{
    if(l==h){
        return a[l];
    }
    else{
        int m=(l+h)/2;
        int lhs=findlhs(a,l,m);
         int rhs=findrhs(a,m+1,m);

    }

}


int main(){

      int a[]={-2,-3,4,-1,-2,1,5,-3};
        int n = sizeof(a)/sizeof(int);
        int mss=mssDC(a,l,h);

}