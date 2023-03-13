#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Decimal=>Octal "<<setbase(8)<<15<<endl;
    cout<<"Decimal=>Octal "<<setbase(8)<<10<<endl;
    cout<<"Decimal=>Hexa  "<<setbase(8)<<15<<endl;
    cout<<endl;
    //to convert octal to decimal 0 needed to be written before input
    cout<<"Octal=>Decimal "<<setbase(8)<<017<<endl;
    //to convert hexadecimal to decimal 0x needed to be written before input
    cout<<"Hexa=>Decimal  "<<setbase(8)<<0xf<<endl;

    return 0;
}
