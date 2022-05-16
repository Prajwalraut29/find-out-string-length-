#include <iostream>
 using namespace std;

bool Search(int arr[], int size, int target) {
         if(size == 0){
             return false;
         }
         if(arr[0]== target){                                                                                                                    
             return true;
         }
        else {
            bool rpart = Search(arr+1 ,size - 1,target);
            return rpart;
        }
 
     }
 int main()   {
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int target = 9;
    bool ans = Search(arr,size, target);
    if(ans ){
        cout<<" found "<<endl;
    }
    else {
        cout<<" not found"<<endl;
    }  
    return 0;
     
 }