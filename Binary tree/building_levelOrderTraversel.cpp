#include<iostream>

using namespace std;
class node {

    public:
            int data;
            node * left;
            node * right;

    
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    
}

node * buildBinaryTree(node * root){
    int data;
    cout<<"Enter the data (-1 for NULL): ";
    cin>>data;

    if(data ==-1)
        return NULL;
    
    cout<<"Enter the left child of "<<data<<endl;
    root->left = buildBinaryTree(root->left);
    cout<<"Enter the right child of "<<data<<endl;
    root->left = buildBinaryTree(root->right);

    return root;
}



int main(){

    node * root = NULL;

    root = buildBinaryTree(root);
}