#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next=NULL;
    node(int d){
        data=d;
        next=NULL;
    }
};
node *head=NULL;
// insert first
void insertion_f(node *&head){
    int d;
    cout<<"enter a data ";
    cin>>d;
    //new node 
    node *temp=new node(d); // dynamic node 
    temp->next=head; 
  head=temp;
};
void print_LL(node *&head){
    node *t=head;
    while (t!=NULL)
    {
       cout<<t->data<<" -> ";
       t=t->next;
    }
    cout<<"NULL\n";
};
node *merge(node *left,node *right){
    if(left==NULL){
        return right;
    }
     if(right==NULL){
        return left;
    }
    node *ans=new node(-1);
    node *temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else {
            temp->next=right;
            temp=right;
            right=right->next;
        } 
    }
    while(left!=NULL){
             temp->next=left;
            temp=left;
            left=left->next;
        }
    while(right!=NULL){
             temp->next=right;
            temp=right;
            right=right->next;
        }
    ans=ans->next;
    return ans;
}
node *findmid(node *head){
    node *slow=head;
    node *fast=head->next;
    while(fast!=NULL &&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node *mergesort(node *&head){
 if(head==NULL || head->next==NULL){
    return head;
 }
 node *mid=findmid(head);  // mid element or node
 node *left=head;
 node *right=mid->next;
 mid->next=NULL;
 //recursive call
 left=mergesort(left);
 right=mergesort(right);

// merge both ll
node *res=merge(left,right);
return res;
}
int main (){
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
print_LL(head);
head=mergesort(head);
print_LL(head);
    return 0;
}