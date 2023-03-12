//unary bitwise operations
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    //bitwise left shift
    cout<<(a<<1)<<endl;
    cout<<(a<<2)<<endl;
    cout<<(a<<3)<<endl;
    //bitwise right shift
    cout<<(a>>1)<<endl;
    cout<<(a>>2)<<endl;
    cout<<(a>>3)<<endl;
    //bitwise not
    cout<<(~a)<<endl;
    cout<<(~(~a))<<endl;

    return 0;
}
/*
    bitwise not:
    let a = 4 = 00000100 = +4
    ~a(a not) = 11111011 = 1's complement of a (this will give sign meaning "-")

                00000100 = 1's complement of ~a
                     + 1
            ....................
                00000101 =  5   2's complement of ~a (this will give the integer value meaning 5)

    so ~4 = -5


    left shift:     let a=4=100
                    a<<1 = 1000 = 8
                    a<<2 = 10000= 16
                    a<<3= 100000= 32



    right shift:    let a=4=100
                    a>>1 = 010 = 2
                    a>>2 = 001 = 1
                    a>>3 = 000 = 0

*/
