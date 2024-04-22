//Write a c++ program to check alphabet using conditional operator


#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter character:"<<endl;
cin>>ch;
string result = ((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z'))? "Alphabet":"othercharacter";
cout<<ch<<"is"<<result<<endl;
}