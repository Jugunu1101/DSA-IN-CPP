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
node *head1=NULL;
node *head2=NULL;
// insert first
void insertion_f(node *&head){
    int d;
    cout<<"enter a data is sorted order it will insert in first";
    cin>>d;
    //new node 
    node *temp=new node(d); // dynamic node 
    temp->next=head; 
    head=temp;
};
void print_LL(node *head){
    node *t=head;
    while (t!=NULL)
    {
       cout<<t->data<<" -> ";
       t=t->next;
    }
    cout<<"NULL\n";
};
node *solve(node *l1,node *l2){
    // it for if 1 element is present in first LL
    if(l1->next==NULL){
        l1->next=l2;
        return l1;
    }
    node *curr1=l1;
    node *next1=l1->next;
    node *curr2=l2;
    node *next2=NULL;
    while(next1!=NULL && curr2!=NULL){
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;
            curr1=curr2;
            curr2=next2;
        }
        else {
            curr1=curr1->next;
            next1=next1->next;
            if(next1==NULL){
                curr1->next=curr2;
                return l1;
            }
        }
    }
    return l1;
};
node *merge_ll(node *&l1,node *&l2){
    if(l1==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }
    if(l1->data <= l2->data){  
        return solve(l1,l2);
    }
    else {
       return solve(l2,l1);
    }
}
int main(){
    insertion_f(head1);
    insertion_f(head1);
    insertion_f(head1);
    insertion_f(head2);
    insertion_f(head2);
    insertion_f(head2);
    print_LL(head1);
    print_LL(head2);
    merge_ll(head1,head2);
    print_LL(head1);
    return 0;
}