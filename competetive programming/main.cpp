#include <bits/stdc++.h>
using namespace std;
long long  a,pas =0 ;
int main(){
cin>>a;
for(int i = 0; i<a; i++){
    
    pas += pow(2,i);
}
cout<<pas;

}



