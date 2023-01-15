#include <iostream>
#define N 5
using namespace std;

struct Item{
    int prof;
    int weight;
    float fracpw;
}I[N];

void dosort(int arr[],int n){  //Using Selection Sort
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
void dosort(){
  for(int i=0;i<N;i++)
  {
    float max=I[i].ratio;
    int pos=1;
    for(int j=i+1;j<N;j++){
      if(bag[j]<bag[max])
      max=bag[i];
      bag[i]=bag[max];
      arr[max]=
    }
  }
}

void greedy_Knapsack(int W){
    dosort(I,5); // Sorting the Items in Descending order according to their Profit/Weight ratio.
   int max=W;
    W=0;
    float tot_profit = 0;
    for(int i=1;i<N+1;i++){  //for each item in Knapsack
      if(I[i].weight<max){  //If the weight of item is less than the capacity of knapsack
         tot_profit=tot_profit+I[i].prof;
         W=W+I[i].weight;
      }
      else if(W>max){ //If weight of item is greater than the capacity of Knapsack
        tot_profit=tot_profit+I[i].prof*(((float)(W-max))/I[i].weight);
      break;
      }
      else
     break;
    }
    cout<<"Profit :"<<tot_profit<<endl;
}

main(){
   for(int i=1;i<N+1;i++){
    cout<<"Enter The Profit and Weight of the Item : "<<endl;
    cin>>I[i].prof>>I[i].weight;
    I[i].fracpw=((float)I[i].prof/I[i].weight)
   }
   
 cout<<"/n"<<"Display"<<"/n"<<" ";
 cout<<"Value/tWeight/tFrac"<<" ";
 cout<<"------------------------"<<endl;
 for(int i=0;i<N;i++){
  cout<<"Value :"<<I[i].prof<<"/t"<<"Weight :"<<I[i].weight<<"/t"<<"Fraction :"<<I[i].fracpw<<endl;
 }
greedy_Knapsack(20);

}