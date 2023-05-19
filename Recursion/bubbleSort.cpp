#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n, int i=0, int j=0){
    if(i==n-1) return;
    if(j==n-i-1){
        bubbleSort(arr, n, i+1, 0);
        return;
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubbleSort(arr, n, i, j+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n],i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    bubbleSort(arr, n);
    i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}