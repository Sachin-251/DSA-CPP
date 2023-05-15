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
    int largest = INT8_MIN;
    for(int i=0;i<n;i++){
        if(largest < arr[i]){
            largest=arr[i];
        }
    }
    cout<<"Largest Value in array is: "<<largest<<endl;
    return 0;
}