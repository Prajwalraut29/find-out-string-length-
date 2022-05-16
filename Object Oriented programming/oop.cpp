#include <iostream>
using namespace std;
class Hero { //  declaration of class
    private :
    int health;
    public :
    char level ;
    Hero(){
        cout<<" simple  constructor called"<<endl;
    }
    //paramerterised constructor 
    Hero(int heaalth){
        cout<<" this ->"<< this <<endl;
        health = health;
    }
    void print()
    {
        cout<<" health"<<health<<endl;
         cout<<" level "<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h, char name){
        if(name == 'A'){
        health = h;
        }
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){
    
Hero S(70,'c');
S.print();


Hero R(S);
   R.print();   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /* // object created statically
Hero ramesh(10);
cout<<" address of ramesh"<< &ramesh <<endl;
ramesh.gethealth();
           //dynamically
           Hero *h = new Hero();



        */





















    // creation of object
 //   Hero a ;
   
  //  cout<< " level is "<< a.level<<endl;
  // // cout<<" health is "<< a.gethealth()<<endl;
// dynamically 
//Hero *b = new Hero;
  //cout<< " level is "<< (*b).level<<endl;
   // cout<<" health is "<< (*b).gethealth()<<endl;

     /* Hero ramesh;
      cout<<" size of ramesh "<<sizeof(ramesh)<<endl;
      cout<<" ramesh health is "<< ramesh.gethealth()<<endl;
      ramesh.health = 70;
      ramesh.level = 'A';
      
      cout<<" health "<<ramesh.health<<endl;
      cout<<" level "<<ramesh.level<<endl;
      */
    return 0;
}