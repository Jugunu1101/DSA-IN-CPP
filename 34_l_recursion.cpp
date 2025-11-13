// reverse a string using recursion
// #include <iostream>
// using namespace std;
// void  reverse_str(string &s,int start,int ed){
//         if(start >ed ) return ;
        
//         swap(s[start],s[ed]);
//         start++;
//         ed--;
//         reverse_str(s,start,ed);
// };
// int main(){
//     string s="neeraj";
//     int start=0;
//     int end= s.size();
//     cout<<s<<"\n";
//     reverse_str(s,start,end-1);
//    cout<<s;
//   return 0;
// }



// palindrome or not 
// #include <iostream>
// using namespace std;
// bool  palindrome(string s,int st,int e){
//         if(st > e ) return true;
//         if(s[st]!=s[e]){
//             return false;
//         }
//         else {
//             return palindrome(s,st+1,e-1); 
//              }              
// };
// int main(){
//     string s="neen";
//     int n=s.size();
//     if(palindrome(s,0,n-1)){
//         cout<<" it is palindrome";
//     }
//     else {
//         cout<<" not palindrome";
//     }
//   return 0;
// }


// power
// #include <iostream>
// using namespace std;
// int powr(int n,int p){
//     if(p==0 ){
//         return 1;
//     }
//     return   n* powr(n,p-1);
// }
// int main(){
//   int n,p;
//   cout<<"enter no";
//   cin>>n;
//   cout<<"enter power";
//   cin>>p;
//   int ans=powr(n,p);
//   cout<<ans;
//   return 0;
// }


//  boubble sort
// #include <iostream>
// using namespace std;
// void boubble_sorts(int *arr,int n){
//     if(n==0 || n==1){
//       return ;
//     }
//     for(int i=0;i<n;i++){
//       if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//       }
//     }
//     boubble_sorts(arr,n-1);
// }
//   int main(){
//  int arr[10]={1,4,5,7,3,6,77,6,5,7};
//  boubble_sorts(arr,10);
//  for(int i=0;i<10;i++){
//     cout<<i[arr]<<" ";
//  }
//   return 0;
// }


// merge sort
