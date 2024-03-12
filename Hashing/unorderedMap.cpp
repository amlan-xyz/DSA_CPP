#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

    return 0;
}