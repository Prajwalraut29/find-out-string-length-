#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a = {4,2,1,5,6};
    int n = a.size();
   /* for(int i = 0; i<n; i++){
         int si = i;
         for(int j = 0; j<n; j++){
         if(a[j]<a[si])
         si = j;
         }
      swap(a[i],a[si]);

    }
    for(auto &x :a){
        cout<<x<<endl;
    }
    */
    sort(a.begin(),a.end());
    for(auto &x :a){
        cout<<x<<endl;
    }
}