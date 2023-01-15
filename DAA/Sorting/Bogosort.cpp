#include<iostream>
using namespace std;

bool isSorted(int Arr[], int N)

{

    for(int i=1; i<N; i++)

    {

        if(Arr[i] < Arr[i-1])

            return false;

    }

    return true;

}



void randomly_shuffle(int Arr[], int N)

{

    for(int i = 0; i < N; i++)

    {

        swap(Arr[i], Arr[rand() % N]);

    }

}




int main()

{

    int N = 4;

    int Arr[N] = {2, 13, 7, 1};



    // isSorted() function return true if array

    // is sorted else it returns false

    while(!isSorted(Arr, N))

    {

        // randomly_shuffle() function generates a

        // random permutation of array

        randomly_shuffle(Arr, N);

    }



    for(int i = 0; i < N; i++)

        cout << Arr[i] << " ";



    return 0;

}