#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++) cout<<" ";
        for(j=i;j<=n;j++) {
                if(j==i||j==n||i==1) cout<<j%2;
        else cout<<" ";
        }cout<<endl;
    }return 0;
}
