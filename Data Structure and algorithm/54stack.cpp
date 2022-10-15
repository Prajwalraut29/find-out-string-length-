#include <iostream>
#include <stack>
using namespace std;
int main(){
stack<int> s;
//push ope
 s.push(5);
 s.push(6);
 //pop ope
 s.pop();
 cout<< "printing element "<<s.top()<<endl;


    return 0;
}