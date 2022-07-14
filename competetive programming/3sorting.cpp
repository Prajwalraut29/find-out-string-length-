#include <bits/stdc++.h>
using namespace std;
int main () {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    for(int i = 0; i<n; i++){
        cin>>s;
    if(s =="YES" || s =="Yes" || s =="yEs" || s =="yeS" || s =="YEs" || s=="yES" || s == "yes" || s=="YeS"){
    cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }
    }
    return 0;
    }