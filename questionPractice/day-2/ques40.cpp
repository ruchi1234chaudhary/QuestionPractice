//sum of array
#include<iostream>
using namespace std;
int main(){
    int a[5]={4,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0; i<size; i++){
         sum= sum+a[i];
       
    }
     cout<<sum<<endl;
    return 0;
}