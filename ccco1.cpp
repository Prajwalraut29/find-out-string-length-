#include<bits/stdc++.h>
using namespace std;
int main (){
    string str ;
    getline(cin,str);

    cout<<str<<endl;
    str.push_back('j');
    cout<<"str aftr ps : > "<<str<<endl;
    str.pop_back();
    cout<<" str after pop back : "<<str<<endl;
   return 0;
}