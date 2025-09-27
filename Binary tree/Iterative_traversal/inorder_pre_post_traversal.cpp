#include<iostream>
#include<stack>
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

    // we declare a stack to push the nodes
    stack<node*> st;
    node * curr = root;
    
    while(curr != NULL || !st.empty()){
        
        //get all left nodes
        while(curr !=NULL){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();st.pop();
        cout<<curr->data<<" ";

        //then go to right
        curr = curr->right;
    }
}


void preorder(node * root){
    if(root ==NULL) return;

    stack<node *> st;
    st.push(root);
    while(!st.empty()){
        node * curr = st.top(); st.pop();
        cout<<curr->data<<" ";

        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
    }

}

void postorder(node * root){

    if(root ==NULL) return;
    stack< node*>s1,s2;
    s1.push(root);

    while(!s1.empty()){

        node * curr = s1.top(); s1.pop();
        s2.push(curr);
    
        if(curr->left) s1.push(curr->left);
        if(curr->right) s1.push(curr->right);

    }

    while(!s2.empty()){
        cout<<s2.top()->data<<" ";
        s2.pop();
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