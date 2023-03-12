//bitwise operation using two variables
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    return 0;
}
/*
    let a=4; b=5

    bitwise and &
    4&5: 4=100
         5=101
        ........
       4&5=100=4


    bitwise or |
    4|5: 4=100
         5=101
        ..........
       4|5=101=5


    bitwise XOR ^
    4^5: 4=100
         5=101
        ........
       4^5=001=1

*/
