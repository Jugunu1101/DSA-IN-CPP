//   using class 

// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *next;
//     node(int d){
//         data=d;
//         next=NULL;
//     }
// };
// int main(){
// node *head=new node(19);
// cout<<head->data;
//     return 0;
// }


// singely LL   %$#&$^ 

// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *next=NULL;
//     node(int d){
//         data=d;
//         next=NULL;
//     }
// };
// node *head=NULL;
// // insert first
// void insertion_f(node *&head){
//     int d;
//     cout<<"enter a data ";
//     cin>>d;
//     //new node 
//     node *temp=new node(d); // dynamic node 
//     temp->next=head; 
//   head=temp;
// };
// // insert at position 
// void insertion_pos(node *&head,int pos,int d){
//     if(pos==1){
//         insertion_f(head);
//     }
//     node *temp=head;
//     int c=1;
//     while(c<pos-1){
//         temp=temp->next;
//     }
// node *n1= new node(d);
// n1->next=temp->next;
// temp->next=n1;
// };
// // insert end 
// void insertion_end(node *&head){
//     int d;
//     cout<<"enter a data ";
//     cin>>d;
//     //new node 
//     node *temp=new node(d); // dynamic node 
//     if(head==NULL){
//         head=temp;
//     }
//     head->next=temp;
//     temp=temp->next;
// };
// void delete_position(int pos,node *&head){
//     if(pos==1){
//         node *temp=head;
//         head=head->next;
//         cout<<"\n deleted data :"<<temp->data;
//         delete temp;
//     }
//     else {
//         node *c=head;
//         node *prev=NULL;
//         int count=1;
//         while(count<pos){
//             prev=c;
//             c=c->next;
//             count++;
//         }
//         prev->next=c->next; 
//         delete c;
//     }
// };
// void print_LL(node *&head){
//     node *t=head;
//     while (t!=NULL)
//     {
//        cout<<t->data<<" -> ";
//        t=t->next;
//     }
//     cout<<"NULL";
// };
// int main(){
// // insertion_f(head);
// // insertion_f(head);
// // insertion_f(head);
// // insertion_f(head);
// insertion_end(head);
// insertion_end(head);
// insertion_f(head);
// print_LL(head);
// delete_position(1,head);
// cout<<"\n";
// print_LL(head);
//     return 0;
// } 



// dubbely LL #@$@%^
// 
// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *prev;
//     node *next;
//     node (int d){
//     data=d;
//     prev=NULL;
//     next=NULL;
//     }
// };
// node *head=NULL;
// void traverse(node *&head){
//     node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<"\n";
// };
// void insert_f(){
//     int d;
//     cout<<"enter data";
//     cin>>d;
//     node *n1=new node(d);
//     if(head==NULL){
//         head=n1;
//     }
//     else {
//         n1->next=head;
//         n1->prev=NULL;
//         head=n1;
//     }
// };
// void insert_end(){
//     int d;
//     cout<<"enter data";
//     cin>>d;
//     node *n1=new node(d);
//     if(head==NULL){
//         head=n1;
//     }
//     else {
//         node *temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=n1;
//         n1->prev=temp;
//     }
// };
// void insert_pos(){
//     int d,p;
//     cout<<"enter pos of data";
//     cin>>p;
//     cout<<"enter data";
//     cin>>d;
//     node *n1=new node(d);
//     if(head==NULL){
//         insert_f();
//     }
//     else {
//         node *temp=head;
//         int count=1;
//         while(count < p-1){
//             count++;
//             temp=temp->next;
//         }
//         if(temp->next==NULL){
//             insert_end();
//         }
//         n1->next=temp->next;
//         temp->next->prev=n1;
//         temp->next=n1;
//         n1->prev=temp;
//     }
// };
// void delete_pos(){
//     int p;
//     cout<<"enter which pos is to be deleted: ";
//     cin>>p;
//     //1st pos
//     if(p==1){
//         node *temp=head;
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//     }
//     else{
//        node *curr=head;
//        node *prev=NULL;
//        int cnt=1;
//        while(cnt< p){
//         prev=curr;
//         curr=curr->next;
//         cnt++;
//        }
//        curr->prev=NULL;
//        prev->next=curr->next;
//        delete curr; 
       
//     }
// }
// int main(){
// insert_f();
// insert_f();
// insert_f();
// traverse(head);
// insert_end();
// insert_end();
// insert_end();
// traverse(head);
// delete_pos();
// traverse(head);
//     return 0;
// }


// circular LL @!@!#@$#%&
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

void insert_node(Node *&head){
    int d,element;
    cout<<"enter a element where u wnat to allocate the data: ";
    cin>>element;
    cout<<"enter data:";
    cin>>d;
    Node *temp=new Node(d);
    if(head==NULL){
     head= temp;
     temp->next=temp;
    }
    else {
        Node *curr=head;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
    }
};
void print(Node *&head){
    Node *temp=head;
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while (temp!=head);
    };
Node *head =NULL;
int main(){
    insert_node(head);
    insert_node(head);
        print(head);
    insert_node(head);
    insert_node(head);
    print(head);

    return 0;
}