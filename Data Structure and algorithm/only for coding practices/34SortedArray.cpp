#include <iostream>
using namespace std;
void Sorted(int *arr, int n){
    if(n == 0 || n == 1){
        return ;
    }
    for(int i =0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Sorted(arr,n-1);
}



int main(){
    int arr[5]={2,3,1,3,2};
    Sorted(arr,5);
    for(int i =0; i<5; i++){
     cout<<arr[i];
    }
    
return 0;
}