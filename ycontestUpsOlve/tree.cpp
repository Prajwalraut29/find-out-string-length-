#include<bits/stdc++.h>
using namespace std;
class node{
    public: int data;
     node* left;
     node * right;
     
     node(int d){
        this -> data =d;
        this -> left=NULL;
        this -> right=NULL;

     }
};
node* build(node* root){
cout<<"enter the number data"<<endl;
int data;
cin>>data;
root = new node(data);
if(data == -1){
    return NULL; 
}
cout<<"inserting data in left side "<<data<<endl;
root ->left = build(root->left);
cout<<"enter data for inserting in right side "<<data<<endl;
root ->right = build(root->right); 
return root;
}

int main(){
node* root = NULL;
//creating a tree
root = build(root); 


    return 0;
}