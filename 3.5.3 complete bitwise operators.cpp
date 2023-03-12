#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    //bitwise left shift
    cout<<(a<<1)<<endl;
    cout<<(a<<2)<<endl;
    cout<<(a<<3)<<endl;
    //bitwise right shift
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(a>>3)<<endl;
    //bitwise not
    cout<<(~a)<<endl;
    cout<<(~(~a))<<endl;
    return 0;
}
