#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int>s;
   s.insert(5);
    s.insert(4);
     s.insert(8);
      s.insert(9);

      for(auto it = s.begin(); it!= s.end(); it++){
           cout<<(*it)<<endl;
           
      }
        int key  = 9;
        cout<<"the size of set is "<<s.size()<<endl;
        if( s.count(key) == 0){
               cout<<"founded"<<endl;
               s.erase(key);
           }
           else {
               cout<<"not founded"<<endl;
           }
           cout<<"the size of set is "<<s.size()<<endl;

return 0;
}