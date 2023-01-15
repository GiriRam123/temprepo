#include <iostream>
#define N 5  //No. of Items.
using namespace std;

struct Item{     //Defining the Item.
    int value;
    int weight;
    float frac;
}bag[N];    // Creating N item objects.

void doSort(){   //Using Insertion Sort
    for(int i = 0;i < N-1;i++){
        for(int j = i+1; j > 0;j--){
            if(bag[j].frac > bag[j-1].frac){
                Item temp = bag[j];
                bag[j] = bag[j-1];
                bag[j-1] = temp;
            }
        }
    }
}

void greedy_Knapsack(int W){
    doSort();
    int max = W;  // Max Capacity of Knapsack.
    W = 0;  //Clearing the value of W.
    float profit = 0;
    for(int i = 0;i < N;i++){
        if(max > W + bag[i].weight){   // If Capacity of Knapsack is greater than the Item Weight
            profit = profit + bag[i].value;
            W = W + bag[i].weight; //Incrementing the Weight of Knapsack by adding the item to it.
        }
        else if(max > W){ // Else if Capacity of Knapsack is Greater
            profit = profit + ((float)((max - W))/bag[i].weight)*bag[i].value;
            break;
        }
        else
            break;  
    }
    cout<<"Profit = "<<profit<<endl;
}

int main(){
    for(int i = 0;i < N ;i++){
        cout<<"Enter value and weight of item: ";
        cin>>bag[i].value>>bag[i].weight;
        bag[i].frac = (float)bag[i].value/bag[i].weight;
    }
    //doSort();
    cout<<"\n"<<"Display: \n"<<endl;
    cout<<"Value\tWeight\tfrac"<<endl;
    cout<<"----------------------------"<<endl;
    for(int i = 0;i < N;i++){
        cout<<bag[i].value<<"\t"<<bag[i].weight<<"\t"<<bag[i].frac<<endl;
    }
    greedy_Knapsack(20);  //Max Capacity of Knapsack
}