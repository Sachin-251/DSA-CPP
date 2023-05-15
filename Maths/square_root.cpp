#include <iostream>
//#include <cmath>
using namespace std;

int main(){
    double num;
    int res=1;
    cout<<"Enter the number:\t";
    cin>>num;
    //double square_root = sqrt(num);
    if(num==0 || num==1){
        return num;
    }
    int i=0;
    while(res<=num){
        i++;
        res=i*i;
    }
    cout<<"The Square Root of "<<num<<" is:\t"<<i-1<<endl;
}