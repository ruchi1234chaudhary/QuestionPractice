//if number is between 1 to 10 then print lowercase otherwise print not in range
//by using switch staterment
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(1<=n<=10){
        cout<<"lower case";
    }
    else{
        cout<<"not in range";
    }

    return 0;
}