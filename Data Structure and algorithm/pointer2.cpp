#include<iostream>
using namespace std;
   
  // int arr[10]={23,122,41,67}; //-- array declaration 
   /*
  cout<<" address of first memory block is "<<&arr[0]<<endl;   // o th index address 
  cout<<" address of first memory block is "<<&arr[1]<<endl;  //1st int 1th index address 
   cout<<" address of first memory block is "<<&arr[2]<<endl;  //& address of operator hold the address 
   cout<<" 4th "<<*arr<<endl;   // *arr oth index 
   cout<<" 5th "<<*arr+1<<endl; // * value are increment 
   cout<<" 4th "<<*(arr+1)<<endl; // address of addres of 
   cout<<" 8th "<<arr[2]<<endl;
   cout<<" 9th "<<*(arr+2)<<endl; // *arr + 2 =   42 index to 2 is now index no two is 42 
   */
   /* int i =2;  // i is intiger consists of 4 
   cout<<i[arr]<<endl;    
   
  int temp[10]={1,2};
  cout<<sizeof(*temp)<<endl;  // 4 size 
  cout<<sizeof(&temp)<<endl; // address of 4 size 
  int *ptr = &temp[0];
  cout<<sizeof(ptr)<< endl;
  cout<<sizeof(*ptr)<< endl;
  cout<<sizeof(&*ptr);
  */

/* int a[20]={1,2,3,5}; // array declaration 
cout<<a<<endl; // address of oth index is 
cout<<&a[0]<<endl; // this is a three types 
cout<<&a<<endl;     // this is a three types to declaration of address you can declared any 

 int *ptr = &a[0];   //  
     cout<<ptr<<endl;
      cout<<*ptr<<endl;
     cout<<"--> "<<&ptr<<endl; // & ptr show the address ptr 
    */ 
  /*  
    int arr[10];
    //arr = arr + 1; --> error
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr +1;   // ptr is  incremental address of 
    cout<<ptr<<endl;
*/
/*
    // character array in pointer
   char  ch[6]="abcde";
    cout<< ch <<endl;
                      // character array is show all character not a address
     char *c = &ch[0];
     cout<<c<<endl;
     */
    
    

void update(int *p){
    *p = *p + 1;
}
int getsum(int arr[], int n){
    int sum = 0;
   for(int i=0; i<n; i++){
       sum+=arr[i];
   }
   return sum;

}


   int main (){

int value  = 5;
int *p = &value;
//print(p);
cout<<" before "<< *p <<endl;
 update(p);
   cout<<" after "<<*p<<endl;
    int arr[5]={1,2,3,4,5};
   cout<<" sum is "<< getsum(arr,5)<<endl;
   
    return 0;

}