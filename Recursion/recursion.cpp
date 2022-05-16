#include <iostream>
using namespace std;


void f(int i , int n){
    if(i>n) return ; // i<1    
    f(i-1,n);
    cout<<i<<endl; 
}
int main(){
  int n;
  cin>>n;
  f(n,n);
    return 0;
}