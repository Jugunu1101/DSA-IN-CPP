// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> q;
//     q.push(2);
//     cout<<q.front();
//     q.push(3);
//     cout<<q.front();
//     q.push(5);
//     cout<<q.front();
//     q.push(6);
// cout<<q.front();
// q.pop();

//     return 0;
// }

//queue

// #include<iostream>
// using namespace std;
// class queue {
//     private :
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     public:
//     queue() {
//         size=1000;
//         arr=new int[size];
//         front=0;
//         rear=0;
//     }
//     void enqueue(int n){
//         if(is_full()){
//             cout<<"queue is overflow or full";
//             return ;
//         }
//         arr[rear]=n;
//         rear++;
//     }
//     int dequeue(){
//         if(is_empty()){
//             cout<<"queue underflow or empty";
//             return -1;
//         }
//         int ans=arr[front]; 
//         arr[front]=-1;
//         front++;
//         if(front==rear){
//             front=0;
//             rear=0;
//         }
//         return ans;
//     }
//     bool is_empty(){
//         if(front==rear){
//             return true;
//         }
//         return false;
//     }
//     bool is_full(){
//         if(rear==size){
//             return true;
//         }
//         return false;
//     }

//     int front_e(){
//         if(is_empty()){
//             cout<<"empty\n";
//             return -1;
//         }
//         int ans=arr[front];
//         return ans;
//     }
// };
// int main (){
// queue q=queue();
// q.enqueue(99999);
// q.enqueue(1300);
// q.enqueue(22);
// cout<<q.front_e()<<"\n"; 
// cout<<q.dequeue()<<endl;
// q.enqueue(13);
// cout<<q.front_e()<<"\n"; 
// q.enqueue(34);
// q.enqueue(455561);
// q.enqueue(120);
// q.enqueue(133);
// q.enqueue(124);
// q.enqueue(215);
// cout<<q.front_e()<<"\n";  
// queue c=q; 
// while(!c.is_empty()){
//     cout<<c.front_e()<<" ";
//     c.dequeue();
// }
// return 0;
// }


// // DEqueue
// #include<iostream>
// #include<queue>
// using namespace  std;
// int main (){
//     deque<int> d;
//     d.push_front(23);
//     d.push_front(2)
//     d.push_front(1);
//     d.push_back(3444);
//     cout<<d.front();
//     cout<<d.back();

//     return 0;
// }
