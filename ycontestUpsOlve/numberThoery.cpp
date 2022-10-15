#include <bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i = 10; i>=0; i--){
           cout<<((num>>i) & 1);

    }
    cout<<endl;
}
int main(){
//         AND  OR   XOR
 //   o o  -> 0 -> 0 -> o
//   o 1  -> 0 -> 1 -> 1
//   1 o  -> 0 -> 1 -> 1
//   1 1  -> 1 -> 1 -> o
//  \
 
 printBinary(9);
 int a = 9;
 int i= 3;
 if(a & (i<<i) != 0){
    cout<<"SET BIT "<<endl;
}
else {
    cout<<"not  UNSET"<<endl;
}
// bit set 
printBinary(a | (a<<1));
//bit unset 
printBinary(a&(~(1<<3)));
//toggle 
printBinary(a ^ (1<<2));





    return 0;
}