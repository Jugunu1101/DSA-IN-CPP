/*
A A A
B B B 
C C C 
*/
// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         char c='A'+i;
//         cout<<c<<" ";
//     }
//     cout<<"\n";
// }
// return 0;
// }

// /*
// a b c 
// a b c 
// a b c 
// */
// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         char c='A'+j;
//         cout<<c<<" ";
//     }
//     cout<<"\n";
// }
// return 0;
// }

/*
a b c 
b c d
c d e
*/
// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         char c='A'+i+j-2;
//         cout<<c<<" ";
//     }
//     cout<<"\n";
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         char c=64+i;
//         cout<<c<<" ";
//     }
//     cout<<"\n";
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int n ;
//     cout<<"enter a no";
//     cin>>n;
// int v=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         char c=64+v;
//         v+=1;
//         cout<<c<<" ";      
//     }
//     cout<<"\n";
// }
// return 0;
// }


#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter a no";
    cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        char c=65+i+j-2;
        cout<<c<<" ";      
    }
    cout<<"\n";
}
return 0;
}