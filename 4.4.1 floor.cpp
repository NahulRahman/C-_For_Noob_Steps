/*
floor rounds of the given value to the closest integer which is less than the given value.
suppose a=1.311
        b=1.50
        c=-1.822

        floor a= 1 as 1<1.311<2
        floor b= 1 as 1<1.50<2
        floor c= -2 as -2<-1.822<-1

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<floor(a)<<endl<<floor(b)<<endl<<floor(c);
    return 0;
}
