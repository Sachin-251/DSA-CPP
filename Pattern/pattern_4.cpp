#include <iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int k=n;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}