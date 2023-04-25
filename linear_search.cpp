#include <iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter the number of elements:\t";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cout<<"Enter the value to search:\t";
    cin>>val;
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"The value is on index:\t"<<i;
            return 0;
        }
    }
    cout<<"Value is not present in array";
    return 0;
}