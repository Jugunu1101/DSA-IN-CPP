#include<iostream>
#include<map>
using namespace std ;
class node {
    public:
    int data;
    node *prev;
    node *next;
    node (int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
node *head=NULL;
void insert_node(){
     int d;
     cout<<"enter data";
     cin>>d;
     node *n1=new node(d);
     if(head==NULL){
        head=n1;
        n1->next=head;
     }
     else {
        node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        n1->next=head;
        temp->next=n1;
        head=n1;
     }
};
// it is to detect the loop
node *flayeddetect_loop(node *head){
    if(head==NULL)
    return NULL;
    node *slow=head;
    node *fast=head;
    while(slow!=NULL && fast!=NULL){
        // fast =2X
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
  return NULL;
};
// it is to find the starting the loop
node *getstart_loop(node *head){
    if(head==NULL){
        return NULL;
    }
    node *intersection= flayeddetect_loop(head);//where the slow & fast meet it form the loop
    node *slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
};
void remove_loop(node *head){
    if(head==NULL){
        return ;
    }
    node *startof_loop=getstart_loop(head);  // it find the start of loop
    node *temp=startof_loop;
    while(temp->next!=startof_loop){
        temp=temp->next;
    }
  temp->next=NULL;  
};
void print_ll(node *&head){
    node *temp=head->next;
    cout<<head->data<<" ";
    while(temp!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<"\n";
};
int main (){
    insert_node();
    insert_node();
    insert_node();
    insert_node();
    print_ll(head);
    node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node *tail=temp;
    cout<<"tail element is :"<<tail->data<<" \n";
    // tail->next=NULL;           // this is for not p
    // tail->next=head->next->next;
    // cout<<tail->data<<" tail\n";
    if(flayeddetect_loop(head)!=NULL){
        cout<<"\nloop is present";
    }
    else{
        cout<<"\nloop not present";
    }
    remove_loop(head);
    cout<<"\nNOW the loop has removed";
    if(flayeddetect_loop(head)!=NULL){
        cout<<"\nloop is present";
    }
    else{
        cout<<"\nloop not present";
    }
    return 0;
}