/*
floor rounds of the given value to the closest integer which is more than the given value.
suppose a=1.311
        b=1.50
        c=-1.822

        floor a= 2 as 1<1.311<2
        floor b= 2 as 1<1.50<2
        floor c= --1 as -2<-1.822<-1

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<ceil(a)<<endl<<ceil(b)<<endl<<ceil(c);
    return 0;
}

