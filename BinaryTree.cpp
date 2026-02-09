#include<iostream>
#include<queue>
using namespace std;
class node {
    public :
    int data;
    node *left;
    node *right;
    node(int d){
        data =d;
        left=NULL;
        right=NULL;
    }
};

node *build_tree(node *root){
cout<<"enter the data";
int d;
cin>>d;
root=new node(d);
if(d==-1){
    return NULL;
}
// jab tak -1 nhi aayega tab tak left vala chalega then rigth chalega
   cout<<"enter data to insert in left of root node "<<d<<"\n";
   root->left=build_tree(root->left);
// jab -1 nhi aayega tab tak rigth vala chalega    >>> recursive call
   cout<<"enter data to insert in rigth of root node "<<d<<"\n";
   root->right=build_tree(root->right);
    return root;
};


void traversal(node *root){
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){
        node *temp=q.front();
         cout<<temp->data<<" ";
        q.pop();
       
        if(temp->left){
            q.push(temp->left);
        }
         if(temp->right){
            q.push(temp->right);
        }
    }
};
void inorder_traversal(node *root){
// Left root rigth
if(root==NULL){
    return;
}
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);

};
void preorder_traversal(node *root){
    if(root==NULL){
    return;
}
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
};
void postorder_traversal(node *root){
    if(root==NULL){
    return;
}
    postorder_traversal(root->left);
    postorder_traversal(root->right);
      cout<<root->data<<" ";
};
int main (){
node *root=NULL;
cout<<" 1 2 3 -1 -1 4 -1 -1 5 -1 -1\n";
root=build_tree(root);
// traversal(root_n);
cout<<"\n";
preorder_traversal(root);   // 1 2 3 4 5
cout<<"\n";
postorder_traversal(root);

    return 0;
}