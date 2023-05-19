#include<iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int n1, int n2){
    int arr[n1+n2],i=0,j=0,k=0;
    while(j<n1 and k<n2){
        if(arr1[j]<arr2[k]){
            arr[i]=arr1[j];
            j++;
        }else{
            arr[i] = arr2[k];
            k++;
        }
        i++;
    }
    while(j<n1){
        arr[i]=arr1[j];
        j++;
        i++;
    }
    while(k<n2){
        arr[i]=arr2[k];
        k++;
        i++;
    }

    i=0;
    while(i<n1+n2){
        cout<<arr[i]<<" ";
        i++;
    }
}

int main(){
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10};
    int n1=sizeof(arr1)/sizeof(arr1[0]); int n2=sizeof(arr2)/sizeof(arr2[0]);
    mergeArray(arr1,arr2,n1,n2);
    return 0;
}