#include<bits/stdc++.h>
using namespace std;

// You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.

// Your task is to count the frequency of all elements from 1 to n.
// Note:
// You do not need to print anything. Return a frequency array as an array in the function such that index 0 represents the frequency of 1, index 1 represents the frequency of 2, and so on.
// Example:
// Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
// Output: [2, 1, 1, 0, 0, 0]
// Explanation: Below Table shows the number and their counts, respectively, in the array
// Number         Count 
//  1                2
//  2                1
//  3                1
//  4                0
//  5                0
//  6                0

int main(){
    int n,x;
    cin>>n>>x;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int hash[n]={0};

    for(int i=0;i<n;i++){
        hash[nums[i]-1]++;
    }

    for(int i=0;i<n;i++){
       cout<<hash[i]<<" ";
    }
}