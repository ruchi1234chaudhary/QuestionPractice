//Write a c++ program to calculate marks, percentage,and division of three subjects;
#include<iostream>
using namespace std;
int main(){
    int marks1;
    cout<<"Enter marks of subj1"<<endl;
    cin>>marks1;
    int marks2;
    cout<<"Enter marks of subj2"<<endl;
    cin>>marks2;
    int marks3;
    cout<<"Enter marks of subj3"<<endl;
    cin>>marks3;
    int percentile = ((marks1+marks2+marks3)/3);
    cout<<"percentile of three subject"<<" "<<percentile<<endl;
    if(percentile<30){
        cout<<"C"<<endl;
    }
    else if(30<percentile<75){
        cout<<"B"<<endl;
    }
    else{
        cout<<"A"<<endl;
    }
    return 0;
}