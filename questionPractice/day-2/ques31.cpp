//Check vowel or not?
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Not Vowel";
    }

    return 0;
}