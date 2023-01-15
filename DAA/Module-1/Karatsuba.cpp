#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void Karatsuba(int x,int y){
    if(x%2==0 && y%2==0){
    int n = max(countDigit(x),countDigit(y));
    int power =pow(10,n/2);
    int power_1= 10**n;
    int a=(x/power);
    int b=(x%power);
    int c=(y/power);
    int d=(y%power);
    int s1=Karatsuba(a,c);
    int s2=Karatsuba(b,d);
    int s3=Karatsuba(a+b,c+d);
    int s4=s3-s2-s1 ;
    int s5=s1*(power_1)+s4*(power)+s2;
    return s5;
    } 
    
}


main(){
    int x, y;
    cout<<"Enter the numbers to be multiplied"<<endl;
    cin>>x;cin>>y;
    if(x>10,y>10){
      Karatsuba(x,y);
    }
    else{
      return x*y;
    }
}