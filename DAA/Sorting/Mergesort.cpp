#include<iostream>
using namespace std;
#define size 20
void merge(int A[],int s, int e ,int mid){
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[size];

    while(i<=mid&&j<=e){
        if(A[i]<A[j])
            temp[k]=A[i];
            i++;k++;
        else
          temp[k]=A[j];
          j++;k++;
         while(i<=mid){
            temp[k]=A[i];
            i++;k++;
              }  
           while(j<=e){
            temp[k]=A[j];
             j++;k++; 
             }

    }
}



void mergesort(int A[],int s,int e){
    int mid=(s+e)/2;
    if(s<=e){
        mergesort(A,s,mid);
        mergesort(A,mid+1,e);
        merge(A,s,e,mid);
    }
}