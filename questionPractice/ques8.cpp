#include<iostream>
using namespace std;
int main(){
    string s = " Ruchi chaudhary";
    //cin>>s; print only one word
    //getline(cin,s);//for taking input we use 
    cout<<s<<endl;
    s[0]='M';//update
    s[2]='d';//update
    cout<<s;
}