#include<iostream>
#include<queue>
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
    
};

node* buildBinaryTree(node * root){
    int data;
    cout<<"Enter the data (-1 for NULL): ";
    cin>>data;
    root = new node(data);

    if(data ==-1)
        return NULL;
    
    cout<<"Enter the left child of "<<data<<endl;
    root->left = buildBinaryTree(root->left);
    cout<<"Enter the right child of "<<data<<endl;
    root->right = buildBinaryTree(root->right);

    return root;
}



void inorder(node * root){
    if(root !=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


void preorder(node * root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node * root){

    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){

    node * root = NULL;

    root = buildBinaryTree(root);

    //sample input 
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\nINORDER : ";inorder(root);
    cout<<"\nPREORDER : ";preorder(root);
    cout<<"\nPOSTORDER : ";postorder(root);

}