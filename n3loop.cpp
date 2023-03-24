#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++) cout<<" ";
        for(j=1;j<=n;j++) cout<<i%2<<" ";
        cout<<endl;
    }return 0;
}
