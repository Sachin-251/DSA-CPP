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
    cout<<"Array in reverse order:\n";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}