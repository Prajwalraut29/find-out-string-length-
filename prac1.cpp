#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]== key){
            return mid;
        }
        if(key>arr[mid]){
            start= mid +1;
        }
        else{
            end= mid-1;
        }
        mid = (start+end)/2;
    }
   return -1;
}
int main(){
    int arr[9]= {2,3,5,7,9,11,12,15,17};
    int index=binarysearch(arr,9,5);
    cout<<"index of 5 is :"<<index<<endl;
    return 0;
    
}