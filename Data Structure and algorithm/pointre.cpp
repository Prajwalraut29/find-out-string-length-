#include<iostream>
using namespace std;
int main (){
    int n = 5;
    int *p = &n;

    cout<<"after increment of * p : "<<*p<<endl;
    cout<<" address of n is       : "<<p << endl;
    int *q= p;
//coping the pointer 
    cout<<" the value of *q is "<<*q<<endl;
    cout<<" without * is "<<q<<endl;
    
    return 0;
}