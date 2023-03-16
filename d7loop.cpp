#include <iostream>
using namespace std;
int main(){
    int i, j, rows;
    int stars, spaces;
    cin>>rows;
    stars = 1;
    spaces = rows - 1;
    for(i=1; i<rows*2; i++){
        for(j=1; j<=spaces; j++) cout<<" ";
        for(j=1; j<stars*2; j++) cout<<j%2;
        cout<<endl;
        if(i<rows){
            spaces--;
            stars++;
        }else{
            spaces++;
            stars--;
        }
    }return 0;
}
