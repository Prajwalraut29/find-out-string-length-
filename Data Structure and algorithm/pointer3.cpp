#include <iostream>
using namespace std;
void update(int **p){
 p = p+1; // increment ho yenga idhar 
 
  **p = **p + 1; //  
}
int main(){
     int i = 5;
    int* p = &i;
   int** p2 = &p ;
cout<<" printing p "<<*p<<endl;
   cout<<" address *p : "<<&p<<endl;
    cout<<*p2<<endl;
    cout<<i<<endl;
    cout<<**p2<<endl;
    cout<< &i <<endl;
    cout<< p <<endl;
    cout<< *p2<<endl;
    
    


       
    
    return 0;
}  