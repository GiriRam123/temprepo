#include<iostream>
using namespace std;

void matmul(int *p,int n){
    int M[n+1][n+1];
    int ktab[n+1][n+1];
    for(int i=1;i<n+1;i++){
        M[i][i]=0;
        ktab[n+1][n+1];
    }
    for(int t=2;t<n;t++){
        for(int i=1;i<=n-t+1;i++){
            int j=t+i-1;
           int min=INT_MAX;
           int kval=0;
           for(int k=i;k<j;j++){
                 int sum= M[i][k]+M[k+1][j]+(p[i-1]*p[k]*p[j]);
                 if(sum<min){
                    min=sum;
                    kval=k;
                 }
           }
           M[i][j]=min;
           ktab[i][j]=kval;
        }
    }
    cout<<"Table values are :";
    for(int i=1;i<n;i++){
        cout<<endl;
        for(int j=i;j<=n;j++){
            if(i<j)
            cout<<endl;
            else{
                cout<<M[i][j];
            }
        }
    }
}

int main()
{
       int p[]={5,4,6,2,7};
        int n =4;
        matmul(p,n);



}