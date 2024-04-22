//Write a program to swap two numbers
//using temp variable
#include<iostream>
using namespace std;
int main(){
    int a=6;
    int b = 5;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// cout<<"swap of two numbers:"<<a<<","<<b<<endl;
a = a+b;
b = a-b;
a = a-b;
cout<<a<<","<<b;
}
