#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<k%2;
            k++;
        }cout<<endl;
    }return 0;
}
