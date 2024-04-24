//In a given string , replace each lower case character with'#' symbol and each uppercase character with '*'

#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    getline(cin,s);
    int length = s.length();
    for(int i=0; i<length-1; i++){
        if(s[i]>='a' && s[i]<='z'){
            cout<<"#";
        }
        else{
            cout<<"*";
        }
    }
    return 0;
}