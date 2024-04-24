//Revrese of a number of their digits
//45643=34654
#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum*10 +r;
        n=n/10;

    }
    cout<<sum;
}