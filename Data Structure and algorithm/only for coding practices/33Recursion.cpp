#include <iostream>
using namespace std; 

bool sorted(int arr[], int size){ // bool function for true or false 
    if(size == 0 || size == 1) { // base case size is equal to 0 or 1 then return 1 
        return true;
    }

    if(arr[0]>arr[1])   // arr 0th index is greater than 1th index then return false becouse of condition false 
                        // oth index is greater means array is not sorted and then return false 
        return false;
    
    else {                                        
        bool Rpart = sorted(arr+1, size - 1);      // bool remaining part = to sorted funct() arra is increment and size is minus one then all part are sorted
     return Rpart;
    }
}
int main(){
    int arr[5]={ 33,1,5,7,9}; 
    int size = 5;

    bool ans = sorted(arr, size );  // ans bool
    if(ans){
        cout<<" array is sorted "<<endl;
    }
    else {
        cout<<" array is not sorted"<<endl;
    }
    return 0;
}