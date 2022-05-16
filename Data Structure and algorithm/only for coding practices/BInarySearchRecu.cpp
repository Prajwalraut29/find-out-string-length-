#include <iostream>
using namespace std;
bool BinarySearch(int *arr  , int s , int e , int k){
    if(s>e){
        return false;
    }
    int mid =  s+ (e-s)/2;
    if(arr[mid] == k){
        return true;
    }

    if(arr[mid]< k){
        return BinarySearch(arr,mid+1,e,k);
    }
 else{
    return BinarySearch(arr,s,mid-1,k);
 }
}

int main(){
int arr[6]={1,2,3,4,5,8};
    int size = 6;
    int key = 9;

  int ans = BinarySearch(arr , 0, 5, key);
  if(ans){
      cout<<" element found "<<endl;
  }
  else{
      cout<<" element not found "<<endl;
  }
    return 0;
}