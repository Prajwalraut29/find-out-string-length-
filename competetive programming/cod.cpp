#include <bits/stdc++.h>
using namespace std;
int main () {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    int count = 0;
    for(int i = 0; i<n; i++){
        cin>>s;
        if(s[i] != s[i+1]){
             count+=2;
        }
        else if(s[i] == s[s[i+1]]){
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
    
    }