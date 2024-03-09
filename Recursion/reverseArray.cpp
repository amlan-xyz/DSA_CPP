#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reverseArray_TwoPointer(int arr[],int n){
    int p1=0,p2=n-1;

    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;p2--;
    }
    printArray(arr,n);
}


void reverseArray_recursive(int arr[],int start,int end){
    if(start<end){
        return;
    }
    swap(arr[start],arr[end]);
    reverseArray_recursive(arr,start+1,end-1);  
}

int main(){
    int n = 5;
   int arr[] = {5,4,3,2,1};
//    reverseArray_TwoPointer(arr, n);
    reverseArray_recursive(arr,0,n-1);
    printArray(arr,n);
   return 0;
}