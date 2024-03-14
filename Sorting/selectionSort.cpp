#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
  for(int i=0;i<n;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
               minIdx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIdx];
        arr[minIdx]=temp;
    }
}

int main(){
    int arr[5]={5,3,6,1,2};

    selectionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}