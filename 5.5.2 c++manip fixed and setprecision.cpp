#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a;
    cin>>a;
    cout<<fixed<<setprecision(1)<<a<<endl;
    cout<<fixed<<setprecision(2)<<a<<endl;
    cout<<fixed<<setprecision(3)<<a<<endl;
    cout<<fixed<<setprecision(4)<<a<<endl;
    cout<<fixed<<setprecision(5)<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;
    return 0;
}
/*
i/p:
6.456789

o/p:
6.5
6.46
6.457
6.4568
6.45679
6.45679
6.45679
*/

