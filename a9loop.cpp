#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=1;
    cin>>n;

    for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++) cout<<" ";
        for(j=1;j<=(2*i-1);j++){
            if(i==1||j==1||j==(2*i-1)) cout<<"*";
            k++;
        }cout<<endl;
    }

    for(i=1;i<=n;i++){
            for(j=1;j<i;j++) cout<<" ";
        for(j=1;j<=(2*n-(2*i-1));j++){
            if(i==1||j==1||j==2*n-(2*i-1)) cout<<"*";
        }cout<<endl;
    }
    return 0;
}
