#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++) cout<<" ";
        for(j=1;j<=(2*i-1);j++){
            if(j%2==0) cout<<"A    ";
            else cout<<"B    ";
        }cout<<endl;
    }

    for(i=1;i<=n;i++){
            for(j=1;j<i;j++) cout<<" ";
        for(j=1;j<=(2*n-(2*i-1));j++){
            if(j%2==0) cout<<"A    ";
            else cout<<"B    ";
        }cout<<endl;
    }
    return 0;
}
