// this program finds that the linked list is circular or not 
#include<iostream>
using namespace std;
class  Node {
public:
    int data;
    Node *next=NULL;
     Node (int d){
        data = d;
     }
};
Node *head=NULL;
bool is_circular(Node *head){
    if(head==NULL){
        return true;
    }
    Node *temp=head;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    else {
        return false;
    }
}
void insert_node(){
     int d;
     cout<<"enter data";
     cin>>d;
     Node *n1=new Node(d);
     if(head==NULL){
        head=n1;
        n1->next=head;
     }
     else {
        Node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        n1->next=head;
        temp->next=n1;
        head=n1;
     }
};
void print(Node *&head){
    Node *temp=head;
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while (temp!=head);
    cout<<"\n";
    };
int main(){
    insert_node();
    insert_node();
    insert_node();
    insert_node();
    print(head);
   bool ans= is_circular(head);
   if(ans==true){
    cout<<"Yes it is circular\n";
    print(head);
   }
   else {
    cout<<"No this Linked list is not circular";
   }
    return 0;
}