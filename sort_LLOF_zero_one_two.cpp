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
    cout<<"insert only 0-1-2 in linked list : ";
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
node *sort_zero_one_two(node *&head){
    int z=0;
    int o=0;
    int t=0;
    node *temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            z++;
        }
        else if(temp->data==1){
            o++;
        }
        else {
            t++;
        }
        temp=temp->next;
    }
    node *n=head;
    while(n!=NULL){
        if(z!=0){
            n->data=0;
            z--;
        }
        else if(o!=0){
            n->data=1;
            o--;
        }
        else if(t!=0) {
            n->data=2;
            t--;
        }
        n=n->next;
    }
    return head;
};
int main (){
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
print_LL(head);
sort_zero_one_two(head);
print_LL(head);
    return 0;
}