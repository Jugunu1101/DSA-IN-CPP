#include<iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
// real code    1_->find middle of ll 2->reverse it form mid->next  3->compare ll from first and middle->next 
 ListNode *reverse(ListNode *&head){
    ListNode *curr=head;
    ListNode *next=NULL;
    ListNode *prev=NULL;
    while(curr!=NULL){
    next=curr->next; 
    curr->next=prev;
    prev=curr;
    curr=next;
    }
    return prev;
 };
class Solution {
private:
    ListNode *mid_ele(ListNode *head){
         ListNode *slow=head;
         ListNode *fast=head->next;
         while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
         }
         return slow;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *t=head;
        ListNode *t2=head->next;
        if(t->next==NULL){
            return true;
        }
        if(t2->next==NULL){ 
            if(t->val !=t->next->val){
                return false;
            }
        }
        //middle element 
       ListNode *middle=mid_ele(head);
       ListNode *temp=middle->next;
       // reverse 
       middle->next=reverse(temp);
       // compare
       ListNode *head1=head;
       ListNode *head2=middle->next;
       while(head2!=NULL){
        if(head1->val !=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
       }
      // reverse 
     temp=middle->next;
     middle->next=reverse(temp);
return true;
    }
};