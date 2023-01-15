#include<iostream>
using namespace std;

void countsort(int Q[], int n , int K){
  int count[K+1]; int b[n];
  for(int i=0;Q[i]!=NULL;i++){
    count[Q[i]]++;
  }
  for(int i=1;i<K;i++){
    count[i]=count[i]+count[i-1];
  }
  for(int i=n-1;i>=0;i++){
    b[--count[Q[i]]]=Q[i];
  }
  for(int i=0;i<n;i++){
    Q[i]=b[i];
  }
}

int main(){
    int un[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
   countsort(un,17,9);

    return 0;
}