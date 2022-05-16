#include<iostream>
using namespace std;

/*
int& func(int a){ // bad practice never try this   
    int num = a;
    int& ans = num;
    return ans;
}  

void update2(int& n){  // reference function
    n++;
}

void update1(int n){
    n++;
}  */
   /* char ch = 'q';
    cout<<sizeof(ch)<<endl;
    char* c = &ch;
    cout<<sizeof(c)<<endl;
   /* int i= 5;
    int& j = i;  // create a reference variable 
    cout<< i <<endl; // 5 
    i++; // increment i means 5 to 6 
    cout<< i <<endl; // print 6
   j++;   // j also refernce variable 
    cout<< i <<endl; //  we print i if j also increment it means i also 
*/
/*


int n = 5;
cout<<" before "<<n<<endl;
update2(n);
cout<<" after  "<<n<<endl;
func(n);
*/
    

    int getsum(int *arr, int n){
        int sum =0;
        for(int i= 0; i< n; i++){
            sum += arr[i];
        }
        return sum;
    }
    int main (){
   // variable size array
   int n;
   cin>>n;
   int* arr = new int[n];
         // taking input in array 
         for(int i =0; i<n ; i++){
             cin>> arr[i];
         }

    
     int ans = getsum(arr, n);
         cout<<" answer is "<< ans<<endl;
     
    
    
    
    
    
    return 0;
}