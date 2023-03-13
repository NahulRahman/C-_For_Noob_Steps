#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=1,ab=10,abc=100,abcd=1000;
    cout<<setw(7)<<"a   ="<<setw(4)<<a<<endl;
    cout<<setw(7)<<"ab  ="<<setw(4)<<ab<<endl;
    cout<<setw(7)<<"abc ="<<setw(4)<<abc<<endl;
    cout<<setw(7)<<"abcd="<<setw(4)<<abcd<<endl;
    return 0;
}
/*
o/p:
  a   =   1
  ab  =  10
  abc = 100
  abcd=1000
*/
