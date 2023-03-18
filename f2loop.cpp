#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0) cout<<"A";
                else cout<<"B";
        }cout<<endl;
    }return 0;
}
