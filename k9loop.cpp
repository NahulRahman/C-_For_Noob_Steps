#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=1;
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++) cout<<" ";
        for(j=1;j<=i;j++) {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

     for(i=1;i<=n;i++){
        for(j=1;j<i;j++) cout<<" ";
        for(j=i;j<=n;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
     }
    return 0;
}
