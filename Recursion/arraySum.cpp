#include<iostream>
using namespace std;

int sumArr(int arr[], int n){
    if(n==0){
        return arr[0];
    }
    return arr[n]+sumArr(arr, n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n],i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Array Sum: "<<sumArr(arr, n-1)<<endl;
    return 0;
}