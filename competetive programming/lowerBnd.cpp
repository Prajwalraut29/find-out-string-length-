#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
        auto itr = lower_bound(arr,arr+n,4)-arr;
        cout<<itr<<endl;
         auto itr1 = upper_bound(arr,arr+n,4)-arr;
        cout<<itr1<<endl;
    
    
    return 0;
}