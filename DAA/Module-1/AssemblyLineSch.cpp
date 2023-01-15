#include<iostream>
using namespace std;

int main(){
    int n=4;
    int a1[]={6,7,15,3};
    int a2[]={9,4,8,7};

    int t1[]={3,5,2};
    int t2[]={1,2,1};

    int e1=2,e2=3,x1=1,x2=4;
    int f1[n],f2[n],l1[n],l2[n];
    f1[0]=e1+a1[0];
    f1[0]=e2+a2[0];

    for(int i=0;i<n;i++){
        if(f1[i-1]+a1[i])<(f2[i-1]+t2[i-1+a1[i]]){
            f1[i]=f1[i-1]+a1[i];
            l1[i]=1;
        }
        else{
            f1[i=f2[i-1]]+t2[i-1]+a1[i];
            l1[i]=1;
        }
    }
}