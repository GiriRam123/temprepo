#include<iostream>
using namespace std;

// Kadane's Algorithm, T(n)=O(n^2)

int mss(int a[],int n){
   int maxsum=INT_MIN;
   for(int i=0;i<n;i++){
        int max=0;
     for(int j=i;j<n;j++){
        max=max+a[j];
        if(max>maxsum)
           maxsum=max;
     }
   }
   cout<<"Max Subarray : "<<maxsum;
}

int main(){
    int n=0;
    cout<<"Enter No of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mss(a,n);

    return 0;
}