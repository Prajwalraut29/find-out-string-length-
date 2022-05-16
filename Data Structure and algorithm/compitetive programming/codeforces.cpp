#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s ;
    string p;
    string add;
    for(int i=0; i<3; i++){
        cin>>s>>p;
     add = s +p; 
     }
     if( add == s+p){
         cout<<"YES"<<endl;
     }
     else if(add != s+p){
         cout<<"No"<<endl;
    }
    }
    return 0;
}