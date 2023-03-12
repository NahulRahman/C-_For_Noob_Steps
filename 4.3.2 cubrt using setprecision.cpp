#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(5)<<cbrt(a)<<endl<<cbrt(b)<<endl<<cbrt(c);
    return 0;
}

