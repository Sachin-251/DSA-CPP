#include <iostream>
using namespace std;

int main(){
    int n,res; 
    int bitSet=0;
    cout<<"Enter the number:\t";
    cin>>n;
    /*while(n>0){
        res=n%2;
        if(res==1){
            bitSet=bitSet+1;
        }
        n=n/2;
    }*/
    while(n){
        if(n & 1){
            bitSet++;
        }
        //bitSet += n & 1;
        n = n>>1;
    }
    cout<<"Bit Set:\t"<<bitSet;
}