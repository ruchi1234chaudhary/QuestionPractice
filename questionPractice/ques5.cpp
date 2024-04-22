//Write a c++ program to print leap year using conditional operator
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any year";

    cin>>n;
     string result = ((n%4==0 && n%100!=0) || (n%400==0))? "Leap year":"Not A leap year";
    cout<<result;
    return 0;

}