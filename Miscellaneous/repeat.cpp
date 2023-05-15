#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter the number of elements:\t";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0,ind;
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count==0){
    //         ans=arr[i];
    //         ind=i;
    //     }
    // }

    //Using Bitwise or Bit Manipulation
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        //ans ^= arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<"Unique value in array is: "<<ans<<endl;
    return 0;
}