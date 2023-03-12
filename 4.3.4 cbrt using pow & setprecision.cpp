#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(5)<<pow(a,1.0/3.0)<<endl<<pow(b,1.0/3.0)<<endl<<pow(c,1.0/3.0);
    return 0;
}
