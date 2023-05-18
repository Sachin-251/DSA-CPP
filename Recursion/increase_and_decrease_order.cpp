#include<iostream>
using namespace std;
void increase(int n){
    if(n==0){
        return;
    }
    increase(n-1);
    cout<<n<<endl;
}
void decrease(int n){
    if(n==0) return;
    cout<<n<<endl;
    decrease(n-1);
}
int main(){
    int n;
    cin>>n;
    increase(n);
    cout<<endl;
    decrease(n);
    return 0;
}