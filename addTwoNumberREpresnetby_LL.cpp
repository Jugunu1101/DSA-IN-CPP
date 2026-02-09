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
    cout<<"NULL";
};
 node *reverse(node *&head){
    node *curr=head;
    node *next=NULL;
    node *prev=NULL;
    while(curr!=NULL){
    next=curr->next; 
    curr->next=prev;
    prev=curr;
    curr=next;
    }
    return prev;
 };
 void inserttail(node *&h,node *&tail,int val){ 
        node *n1=new node(val);
        if(h==NULL){
            h=n1;
            tail=n1;
        }
        else {
            tail->next=n1;
            tail=n1;
        }

 }
 node *add(node *first,node *second){
        int carry=0;
        node *anshead=NULL;
        node *anstail=NULL;
       while(first!=NULL || second!=NULL || carry!=NULL){
        int val1=0;
        int val2=0; 

        if(first!=NULL){
            val1=first->data;
        }

        if(second!=NULL){
            val2=second->data;
        }

     int sum =val1+val2+carry;
     int digit= sum%10;
     inserttail(anshead,anstail,digit);
     carry=sum/10;
     if(first!=NULL){
         first=first->next;
     }
          if(first!=NULL){
        second=second->next;
          }
       }
return anshead;       
 };
node *addTwoLL(node *first,node *second){
    // reverse
    first=reverse(first);
    second=reverse(second);
    // add both LL element
    node *ans=add(first,second);
    // reverse
    ans=reverse(ans);

};
int main(){
    
    return 0;
}