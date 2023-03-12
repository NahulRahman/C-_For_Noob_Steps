#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;// let a=7
    // don't forget to use brackets, without brackets in <<()<< error will occur
    cout<<(a+=5)<<endl;//a=a+5   7+5
    cout<<(a-=2)<<endl;//a=a-2  (7+5)-2
    cout<<(a*=3)<<endl;//a=a*3  ((7+5)-2)*3
    cout<<(a/=4)<<endl;//a=a/3  (((7+5)-2)*3)/4
    cout<<(a%=2)<<endl;//a=a%2  ((((7+5)-2)*3)/4)%2
    return 0;
}
