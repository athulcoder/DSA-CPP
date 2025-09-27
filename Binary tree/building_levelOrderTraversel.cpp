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



//levelOrderTraversal 
/*
    Imagine i have tree
            1
        3       5
    7    11    17

to print the tree in this way i have to use level order traversal.
to implement this traversal i have to use queue data structure

*/

void levelOrderTraversal(node*root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        
        
        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){

    node * root = NULL;

    root = buildBinaryTree(root);

    //sample input 
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //levelOrderTravesal

    levelOrderTraversal(root);

}