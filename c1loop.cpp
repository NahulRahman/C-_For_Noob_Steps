#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i,j,n,k=1;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
           (k%2!=0)?cout<<"A":cout<<"B";
            k++;
        }cout<<endl;
    }

    for(i=0;i<n;i++){
        for(j=0;j<i;j--){
            cout<<k%2;
            k++;
        }cout<<endl;

    }return 0;
}
