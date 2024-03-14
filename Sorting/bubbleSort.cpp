#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int arr[5]={5,4,6,1,2};

    bubbleSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}