#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    string str="100";
    cout<<"Binary=>Decimal:="<<stoi(str,nullptr,2)<<endl;
    cout<<"Octal=>Decimal:="<<stoi(str,nullptr,8)<<endl;
    cout<<"Hex=>Decimal:="<<stoi(str,nullptr,16)<<endl;
    return 0;
}
/*
o/p:
Binary=>Decimal:=4
Octal=>Decimal:=64
Hex=>Decimal:=256
*/
