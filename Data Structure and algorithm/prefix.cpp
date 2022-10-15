#include <bits/stdc++.h>
using namespace std; 

int main(){
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
      int n;
      cin>>n;
      vector<int>v;
     
      int i =0, j = n-1;
      bool a =0;
      int ans[]={0,0};
      while( i <= j){
        if(v[i]>=v[j]){
          ans[a]+=v[i];
          i++;
        }
        else {
          ans[a]+=v[j];
          j--;
        }
        a = (a^1);
      }
      cout<<ans[0]<<" "<<ans[1];
      return 0;
}