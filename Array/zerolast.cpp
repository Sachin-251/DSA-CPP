#include <iostream>
using namespace std;

int main(){
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nz=0,z=0;
    while(nz<n){
        if(arr[nz]!=0){
            swap(arr[z],arr[nz]);
            z++;
        }
        nz++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}