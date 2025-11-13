// #include<iostream>
// using namespace std;
// int main (){
//     int a,b;
//     cout<<"enter two no";
//     cin>>a>>b;
//     cout<<"a&b bit and "<<(a&b)<<"\n";
//     cout<<"a&b or "<<(a|b)<<"\n";
//     cout<<"~a  not "<<(~a)<<"\n";
//     cout<<"a&b Xor "<<(a^b);
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
// int a= 1;
// int b=a++;  // 1
// int c=++a;  // 3
// cout<<b<<" "<<c;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
//     int i=0;
// for(;;){
//     if(i<=n){
//         cout<<i<<" ";
//     }
//     else {
//         break;
//     }
//     i++;
// }
// return 0;
// }


//fibo serise
// #include<iostream>
// using namespace std;
// int main(){
//     int a=0;
//     int b=1;
//     int n;
//     cout<<"enter";
//     cin>>n;
//     cout<<a<<" "<<b<<" ";
//     for(int i=0;i<n;i++){
//         int n_no=a+b;
//         cout<<n_no<<" ";
//         a=b;
//         b=n_no;
//     }
// }


#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter a no";
    cin>>n;
int count=0;
for(int i=2;i<n;i++){
    if(n%i==0){
       count++;
        break;
    }
}
if(count==0){
    cout<<n<<" it is prime no";
}
else {
    cout<<n<<" it is not prime";
}
return 0;
}