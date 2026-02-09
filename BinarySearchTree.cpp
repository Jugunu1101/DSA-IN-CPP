#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node*left;
    node *right;
    node (int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
// finding min val in BST
node *minval(node *root){
    node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}


// finding max val in BST
node *maxval(node *root){
    node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
};
void traversal_lvl(node *root){
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

node *insert_nodes(node *&root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d > root->data){
        root->right=insert_nodes(root->right,d);
    }
    else {
         root->left=insert_nodes(root->left,d);
    }
    return root;
};

void create_node(node *&root){
    cout<<"ENTER -1 FOR EXIT FROM INSERTION -";
    int d;
    cout<<"enter data :";
    cin>>d;
    while(d!=-1){
       root=insert_nodes(root,d);
         cout<<"enter data :";
         cin>>d;
    }
};
// Delete node
node *del_node(node *root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if(root->left!=NULL &&root->right==NULL){
            node *temp=root->left;
            delete root;
             return temp;
        }
          if(root->left==NULL &&root->right!=NULL){
            node *temp=root->right;
            delete root;
             return temp;
        }
          if(root->left!=NULL &&root->right!=NULL){
            int min=minval(root->right)->data;
            root->data=min;
            root->right=del_node(root->right,min);
            return root;
        }
    }
    else if(root->data > val){
        root->left=del_node(root->left,val);
        return root;
    }
    else {
         root->right=del_node(root->right,val);
         return root;
    }
};
int main (){
// 40 7 8 50 60 8 9 6 5 -1
node *root=NULL;
create_node(root);
traversal_lvl(root);
cout<<"\nmin in BST is :"<<minval(root)->data<<endl;
cout<<"min in BST is :"<<maxval(root)->data;
del_node(root,6);cout<<endl;
traversal_lvl(root);
return 0;
};