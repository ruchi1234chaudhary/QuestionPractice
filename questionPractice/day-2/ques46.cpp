//factorial of the numbers
#include<iostream>
using namespace std;
int main(){
    int n, f,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    f=n;
    for(i=1;i<n;i++){
        f=f*i;
    }
cout<<f<<endl;
    
}