#include<iostream>>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min])
          min=j;
       }
       int temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;

     }    
}

int main(){

  int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
  sort(arr,17);
  for(int i=0;i<17;i++){
    cout<<arr[i]<<" ";
  }
    cout<<endl;
    return 0;
}