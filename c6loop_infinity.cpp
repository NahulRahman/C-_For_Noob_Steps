#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=0;
    cin>>n;
 for(i=0;i<n;i++){
        for(j=0;j<i;j--){
            cout<<k%2;
            k++;
        }cout<<endl;
    }return 0;
}
