// #include<iostream>
// using namespace std;
// int main (){
//     int n=2;
//     int *p=&n;
//     cout<<&n<<endl;
//     cout<<*p<<endl;
//     cout<<p;
// }


// 26 l 
// array 
// #include<iostream>
// using namespace std;
// int main (){
//     int a[10]={1,3,4};
//     for(int i=0;i<3;i++){
//         cout<<i[a]<<" ";
//     }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int a[10]={1,3,4,23,234,656};
//     int *ptr= &a[0];
//     ptr=ptr+1;
//     cout<<" ptr +1 address +1   : "<<*ptr;

// return 0;
// }

#include<iostream>
using namespace std;
void update(int **p){
    // p=p+1;
    // *p=*p+1;
    **p=**p+1;

};
int main (){
    int a=9;
    int *ptr= &a;
    int **ptr2=&ptr;
    // ptr=ptr+1;
    // cout<<" ptr +1 address +1   : "<<*ptr;
   
    cout<<a<<" \n";
     cout<<&a<<"\n";
      update(ptr2);
      cout<<*ptr<<" \n";
     cout<<ptr<<" \n";
    cout<<**ptr2<<" \n";
    cout<<ptr2<<"\n";

return 0;
}