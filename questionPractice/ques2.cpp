//c++ program to check whether character is alphabet, digit or special



#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character alphabet, digit or special character";
    cin>>ch;
    if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z')){
        cout<<ch<<" = is an alphabet"<<endl;
    }
    else if(ch>'0'&& ch<='9'){
        cout<<ch<<" = is digit"<<endl;
    }
    else{
        cout<<ch<<" = is special character";
    }
    return 0;
}