#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++) cout<<" ";
        for(j=i;j<=n;j++) cout<<j%2<<" ";
        cout<<endl;
    }return 0;
}
