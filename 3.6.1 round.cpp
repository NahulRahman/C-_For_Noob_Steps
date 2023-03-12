/*
    round function rounds thr given value
    i/p: 1.822
         1.351
         1.461

    o/p; 1.8
         1.3
         1.5
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout<<round(a)<<endl<<round(b)<<endl<<round(c)<<endl;
    return 0;
}
