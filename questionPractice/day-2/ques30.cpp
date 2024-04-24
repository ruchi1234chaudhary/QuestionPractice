//function overrridding
#include<iostream>
using namespace std;

void volume(int s){
    cout<<s*s*s;

}
void volume( int r, int h){
    cout<<3.14*r*r*h;

}
void volume(int l, int b, int h){
    cout<<l*b*h;

}
int main(){
    int t;
    cin>>t;
while(t--){
    int q;
    cin>>q;
    switch(q){
        case 1:
        int edge;
            cin>>edge;
            volume(edge);
            break;
            case 2:
            int radius,height;
            cin>>radius>>height;
            volume(radius,height);
            break;
            case 3:
            int length,width,height;
            cin>>length>>width>>height;
            volume(length,width,height);
            break;
    }
}
    return 0;
}