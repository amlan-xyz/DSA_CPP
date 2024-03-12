#include<bits/stdc++.h>
using namespace std;

int main(){
    int hash[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char input;
        cin>>input;
        cout<<hash[input-'a']<<endl;
    }
    return 0;
}