/*removes decimal points after digits
    i/p 3.14159
    o/p 3
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    cin>>a;
    cout<<trunc(a)<<endl;
    return 0;
}
