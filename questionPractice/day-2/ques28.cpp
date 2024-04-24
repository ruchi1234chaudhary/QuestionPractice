//A string consist of the combination of letters , numbers and characters. You have to focus on "*" and "#" symbol and print the output as per the cases.
//1. if No of "*" >"#", output: "Greater"
//2. if No of "*" <"#", output: "Smaller"
//3. if No of "*" ="#", output: "Equal"

#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string which contain any letter, character, numbers:";
    getline(cin,s);
    int count1=0;
    int count2=0;
    int length = s.length();
    for(int i=0; i<length; i++){
        if(s[i]=='*'){
            count1++;
        }
         if(s[i]=='#'){
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Greater";
    }
    else if(count1<count2){
        cout<<"Smaller";
    }
    else{
        cout<<"Equal";
    }
    return 0;
}