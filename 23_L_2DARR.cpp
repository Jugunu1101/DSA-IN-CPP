// #include<iostream>
// using namespace std;
// int print_arr(int a[][2]){
//      for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// };
// int main(){
//     int a[2][2];
//     cout<<"enter no";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cin>>a[i][j];
//         }
//     }
// cout<<("arr is\n");
// print_arr(a);
//     return 0;
// }




// search element 
// #include<iostream>
// using namespace std;
// bool present(int a[][3]){
//     cout<<"enter a terget value";
//     int target;
//     cin>>target;
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]==target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// };
// int main(){
//     int a[3][3];
//     int n=sizeof(a)/sizeof(int); 
//     cout<<"enter "<<n<<" element :\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
// if(present(a)) cout<<"found";
// else cout<<" not f";

//     return 0;
// }



// SUM OF ROW element
// #include<iostream>
// using namespace std;
// int ROW_Sum(int a[][3]){
//     int sum =0;
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=a[i][j];
//         }
//         cout<<"sum of row "<<i<<" is : "<<sum<<endl;
//         sum=0;
//     }
//     return 0;
// };
// int main(){
//     int a[3][3];
//     int n=sizeof(a)/sizeof(int); 
//     cout<<"enter "<<n<<" element :\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
// ROW_Sum(a);
//     return 0;
// }


// print max sum in row
// #include<iostream>
// using namespace std;
// int maxSum_row(int a[][3]){
//     int maxi=0;
//      for(int i=0;i<3;i++){
//         int sum =0;
//         for(int j=0;j<3;j++){
//             sum+=a[i][j];
//         }
//         if(maxi < sum ) {
//             maxi =sum;
//         } 
//     }
//     cout<<"The MAX sum in row is : \n"<<maxi;
//     return 0;
// };
// int main(){
//     int a[3][3];
//     int n=sizeof(a)/sizeof(int); 
//     cout<<"enter "<<n<<" element :\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
// maxSum_row(a);
//     return 0;
// }



// wave order 
// #include<iostream>
// using namespace std;
// int wave_order(int a[][3], int r ,int c){
//     for(int col=0;col<c;col++){

//         if( col & 1){
//             for(int row=r-1;row>=0;row--){
//                 cout<<a[row][col]<<" ";
//             }
//         }
//         else {
//             for(int row=0;row<r;row++){
//                 cout<<a[row][col]<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// };
// int main(){
//     int a[3][3];
//     int n=sizeof(a)/sizeof(int); 
//     cout<<"enter "<<n<<" element :\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
// cout<<" simple order \n";
//  for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//  }
//  cout<<"wave order \n";
// wave_order(a,3,3);
//         return 0;
// }

#include<iostream>
using namespace std;
int main (){
    cout<<"hlo";
    return 0;
}