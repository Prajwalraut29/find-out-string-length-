#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c;
    cin>>n>>c;
    int a[n];
    int temp =0;
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
     if(a[i] == a[i+1]){
         temp = a[i];
     }
    }
    cout<<temp*c<<endl;
    }
    return 0;
}
    
