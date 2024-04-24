//Write a c++ program to print the difference of sum of the odd and even digits.
//input:123456 
//output:3



#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
      int r=n%10;
      if(r%2==0){
        even= even+r;
      }
      else{
        odd=odd+r;
      }
      n=n/10;
    }
    if(odd<even){
        cout<<even-odd;
    }
    else{
        cout<<odd-even;
    }
}