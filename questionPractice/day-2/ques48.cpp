//print prime number till nth term
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2; i<n; i++){
       for(k=2; k<i; k++){
        if(i%k==0){
            cout<<" ";
            break;
        }
       }
       if(k==1){
        cout<<k;
       }
    }
}