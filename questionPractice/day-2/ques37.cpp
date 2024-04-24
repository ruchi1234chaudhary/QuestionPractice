//Update the value using pointer
#include<iostream>
using namespace std;
void updateVariable( int *a){
    *a=*a+10;
}
int main(){
    int a;
    cin>>a;
    updateVariable(&a);
    cout<<a;
}