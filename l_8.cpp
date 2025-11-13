// // count how 
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter ruppes";
// cin>>n;
// int one=0;
// int ten=0;
// int tw=0;
// int fifty=0;
// int hun=0;
// while(n>0){
//  switch (n>=100 ? 100 :
//          n>=50  ? 50  :
//          n>=20  ? 20  :
//          n>=10  ? 10  :
//          n>=1   ? 1 :0)
//  {
//    case 1:
//       one = n / 1;
//       n -= one * 1;
//       break;

//    case 10 :
//        ten=n/10;
//         n-=ten*10;
//         break;

//    case 20:
//        tw=n/20;
//         n-=tw*20;
//         break; 
//    case 50:
//         fifty=n/50;
//         n-=fifty*50;
//         break;
//    case 100:
//         hun=n/100;
//         n-=hun*100;     // 1344-13*100
//         break;
//    case 0:
//      cout<<"byy";
//         exit(0);
         
//  }
// }
//     cout << "100 : " << hun << endl;
//     cout << "50  : " << fifty << endl;
//     cout << "20  : " << tw << endl;
//     cout << "10  : " << ten << endl;
//     cout << "1   : " << one << endl;
//     return 0;
// }


// function 

// #include<iostream>
// using namespace std;
// int pwr(int a,int b)
// {
//     int power=1;
//     for(int i=1;i<=b;i++){
//     power*=a;
// }
// return power;
// };
// int main (){
//     int a,b;
//     cout<<"enter no";
//     cin>>a;
//     cout<<"enter power";
//     cin>>b;
// int p=pwr(a,b);
// cout<<"the "<<a<<" to the power "<<b<<" is "<<p;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void is_even(){
//     int a ;
//     cout<<"enter a no";
//     cin>>a;
// if(a%2==0){
//     cout<<a<<" is a even no";
//     exit(0);
// } 
// cout<<a<<" is odd no";
// };
// int main (){
// is_even();
// // agar a&1 == 0 ho to vo even hota h  or agar 1 hota h to odd
// // cout<<(6&1);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int prime(int n){
//     for(int i=2;i<n;i++){
//      //divided so odd
//     if (n%i==0)
//     {
//       return 0;   
//     }
// }
// return 1;
// };

// int main (){
//     int n;
//     cout<<"enter no";
//     cin>>n;
//     if(prime(n)){
//         cout<< n<<" is a prime no";
//     }
//     else {
//         cout<<n<<" is not a prime";
//     }
//     return 0;
// }

