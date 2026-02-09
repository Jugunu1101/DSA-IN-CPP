#include<iostream>
#include<map>
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
node *removeunsorted(node *&head){
    if(head==NULL){
        return NULL;
    }
    node *curr=head;
    node *prev=NULL;
    map<int,bool > visited;
    while(curr!=NULL){
        if(visited[curr->data]==true){
            node *del=curr;
            prev->next=curr->next;
            curr=curr->next;
            delete del;
        }
        else{
        visited[curr->data]=true;
        prev=curr;
        curr=curr->next;
    }
    }
    return head;
}
int main (){
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
insertion_f(head);
print_LL(head);
removeunsorted(head);
print_LL(head);
    return 0;
}