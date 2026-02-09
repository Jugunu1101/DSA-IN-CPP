  // using stl libary 
// #include<iostream>
// #include<stack>
// using namespace std;
// void print(stack<int> s){
//     stack<int> c=s;
//     cout<<"these are element in stack\n";
//     while(c.top()!=c.empty()){
//         cout<<c.top()<<"\n";
//         c.pop();
//     }
// };
// int main (){
// //create
// stack<int> s;
// s.push(2);
// s.push(67);
// s.push(4);
// print(s);
// s.pop();
// print(s);
//     return 0;
// }



// without STL
// #include<iostream>
// using namespace std;
// class stack{
//     public:
//     int *arr;
//     int size;
//     int top;
//     stack(int s){
//         size=s;
//         arr=new int[size];
//         top=-1;
//     }
//     int is_empty(){
//         if(top==-1){
//             return 1;
//         }
//         return 0;
//     }
//     int is_full(){
//         if(top ==size-1){
//             return 1;
//         }
//         return 0;
//     };
//     int peak(){
//         if(top>=0){
//             cout<<"\n";
//             return arr[top];
//         }
//         cout<<"stack is empty";
//         return -1;
//     }
//     void push(int element){
//         if(is_full()){
//             cout<<"stack is full or overflow\n";
//             return ;
//         }
//         else {
//             top++;
//             arr[top]=element;
//         }
//     }
//     void pop(){
//         if(is_empty()){
//             cout<<"stack is empty or underflow\n";
//             return;
//         }
//         else {
//             top--;
//         }
//     }
// };
// int main (){
// stack S(5);
// S.push(1);
// S.push(2);
// S.push(4);
// S.push(7);
// S.push(7);
// S.push(9);
// cout<<S.peak();
// S.pop();
// cout<<S.peak();
//     return 0;
// }



// question 
// insert at bottom of stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void add_bottom(stack<int> &s,int val){
//     if(s.empty()){
//         s.push(val);
//         return ;
//     }
//     int value=s.top();
//     s.pop();
//     add_bottom(s,val);
//     s.push(value);
// }
// int main (){
//     stack<int> s;
//     s.push(1);
//     s.push(11);
//     s.push(21);
//     s.push(31);
//     s.push(41);
//     add_bottom(s,18);
//     while(!s.empty()){
//         cout<<"|   "<<s.top()<<"   | \n ";
//         s.pop();
//     }
//     return 0;
// }


// reverse stack
#include<iostream>
#include<stack>
using namespace std;
void add_bottom(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);
        return ;
    }
    int value=s.top();
    s.pop();
    add_bottom(s,val);
    s.push(value);
};
void reverse(stack<int> &s){
    if(s.empty()){
        return ;
    }
     int t=s.top();
     s.pop();
    reverse(s);
     add_bottom(s,t);
};
int main (){
    stack<int> s;
    s.push(1);
    s.push(11);
    s.push(21);
    s.push(31);
    s.push(41);
    reverse(s);
    while(!s.empty()){
        cout<<"|   "<<s.top()<<"   | \n ";
        s.pop();
    }
    return 0;
}