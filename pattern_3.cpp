#include <iostream>
using namespace std;

int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<ch;
            if(j==n-i){
                for(int k=n;k>i;k--){
                    cout<<ch;
                    ch--;
                }
            }
            ch++;
        }
        cout<<endl;
    }
    return 0;
}