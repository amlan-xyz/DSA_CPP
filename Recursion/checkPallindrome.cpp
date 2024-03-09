#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int p1=0;int p2=s.length()-1;
    while(p1<p2){
        if(s[p1]!=s[p2]){
            return false;
        }
        p1++;p2--;
    }
    return true;
}

bool palindrome_recursive(string s, int start){
    if(start>=s.length()/2) return true;

    if(s[start]!=s[s.length() - start- 1]) return false;

    return palindrome_recursive(s,start+1);
}

int main(){
    string s = "medam";
	if(palindrome_recursive(s,0)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
	return 0;
}