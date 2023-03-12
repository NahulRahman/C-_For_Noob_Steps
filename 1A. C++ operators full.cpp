#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    cout<<"arithmetic operators"<<endl;
    cout<<"A   = "<<a<<endl;
    cout<<"B   = "<<b<<endl;
    cout<<"A+B = "<<a+b<<endl;
    cout<<"A-B = "<<a-b<<endl;
    cout<<"A*B = "<<a*b<<endl;
    cout<<"A/B = "<<a/b<<endl;
    cout<<"A%B = "<<a%b<<endl;
    //increment and decrement
    cout<<"A++ = "<<a++<<endl;
    cout<<"++A = "<<++a<<endl;
    cout<<"A-- = "<<a--<<endl;
    cout<<"--A = "<<--a<<endl;
    cout<<"B++ = "<<b++<<endl;
    cout<<"++B = "<<++b<<endl;
    cout<<"B-- = "<<b--<<endl;
    cout<<"--B = "<<--b<<endl;


    cout<<"assignment operators"<<endl;
    cout<<(a+=5)<<endl;//a=a+5   7+5
    cout<<(a-=2)<<endl;//a=a-2  (7+5)-2
    cout<<(a*=3)<<endl;//a=a*3  ((7+5)-2)*3
    cout<<(a/=4)<<endl;//a=a/3  (((7+5)-2)*3)/4
    cout<<(a%=2)<<endl;//a=a%2  ((((7+5)-2)*3)/4)%2


    cout<<"relational operators"<<endl;
    cout<<(a==b)<<endl; //1==2 false  0
    cout<<(a!=b)<<endl;// 1!=2 true   1
    cout<<(a>b)<<endl; // 1>2 false   0
    cout<<(a<b)<<endl; // 1<2  true   1
    cout<<(a<=b)<<endl;// 1<=2 true   1
    cout<<(a>=b)<<endl;// 1>=2 false  0

    cout<<"logical operators"<<endl;
    cout<<((a!=b)&&(a<b))<<endl;
    cout<<((a!=b)&&(a>b))<<endl;
    cout<<((a!=b)||(a>b))<<endl;
    cout<<(a==b)<<endl;
    cout<<!(a==b)<<endl;
    cout<<(a==a)<<endl;
    cout<<(((a!=b)&&(a<b))||(a==b))<<endl;


    cout<<"bitwise operators"<<endl;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
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

    cout<<"miscellaneous operators"<<endl;
    (a%2==0)?cout<<"EVEN"<<endl:cout<<"ODD"<<endl;

    return 0;
}
