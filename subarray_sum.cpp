#include <iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter the number of elements:\t";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //             sum += arr[k];
    //         }
    //         cout<<" ";
    //         if(sum>max){
    //             max=sum;
    //         }
    //     }
    //     cout<<endl;
    // }
    int cSum[100];
    cSum[0]=arr[0];

    for(int i=1;i<n;i++){
       cSum[i]=cSum[i-1]+arr[i];
       if(cSum[i]>max){
        max=cSum[i];
       }
    }
     for(int i=1;i<n;i++){
       for(int j=i;j<n;j++){
            int sum=cSum[j] - cSum[i-1];
            if(sum>max){
                max=sum;
            }
       }
    }
    cout<<"Max SubArray Sum:\t"<<max<<endl;
    return 0;
}