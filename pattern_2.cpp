#include <iostream>
using namespace std;

int main(){
    int n=5,pattern_of=5;
    int val=pattern_of;
    for(int i=1;i<=n;i++){
        int num=val;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num = pattern_of - num;
        }
        val = pattern_of - val;
        cout<<endl;
    }
}