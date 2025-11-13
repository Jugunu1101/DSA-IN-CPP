 // fact
// #include<iostream>
// using namespace std;
// long long fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n * fact(n-1);
// }
// int main (){
//   int n = 20;
//   cout<<fact(n);
// //2,432,902,008,176,640,000
//     return 0;
// }



// power
#include<iostream>
using namespace std;
long long int  power(int n,int p){
    if(p==0 )  {
         return 1;
    }
     return  n* power(n,p-1);
};
int main (){
  int no=10;
  int pwr=2;
  cout<<power(no,pwr);
    return 0;
}