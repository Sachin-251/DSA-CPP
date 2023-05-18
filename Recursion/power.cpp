#include<iostream>
using namespace std;
int power(int x, int n){
    if(n==0) return 1;
    return x * power(x, n-1);
}
int main(){
    int n,x;
    cin>>x;
    cin>>n;
    cout<<"Power: "<<power(x,n)<<endl;
    return 0;
}