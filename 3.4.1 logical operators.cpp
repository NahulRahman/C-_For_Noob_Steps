//logical operators are combination of relational operators with && || !
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<((a!=b)&&(a<b))<<endl;
    cout<<((a!=b)&&(a>b))<<endl;
    cout<<((a!=b)||(a>b))<<endl;
    cout<<(a==b)<<endl;
    cout<<!(a==b)<<endl;
    cout<<(a==a)<<endl;
    cout<<(((a!=b)&&(a<b))||(a==b))<<endl;
    return 0;
}
