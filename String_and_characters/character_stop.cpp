#include <iostream>
using namespace std;

int main(){
    int count=0;
    char ch;
    cout<<"Enter the characters:\t";
    while(1){
        cin>>ch;
        if(ch=='$'){
            break;
        }
        count++;
    }
    cout<<"Total Characters:\t"<<count<<endl;
    return 0;
}