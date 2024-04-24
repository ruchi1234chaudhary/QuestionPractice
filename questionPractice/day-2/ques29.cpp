//Consider the following series 
//1,1,2,3,4,9,8,27,16,81.........
//find the nth term of this series
//EX:- n=5 output will be =4
#include<iostream>
 #include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n%2==1){
    int term = (n+1)/2;
    int power= pow(2,term-1);
    std::cout<<power;
   }
   else{
    int term = n/2;
    int power = pow(3, term-1);
    std::cout<<power;
   }
    return 0;

}