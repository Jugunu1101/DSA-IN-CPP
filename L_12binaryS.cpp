// binary search

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void print_arr(int *a,int n){
//     for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// cout<<"\n";
// };
// void binary_s(int *a,int n){
//     sort(a,a+n);
//     cout<<"enter a no u wanted to search\n";
//     int val;
//     cin>>val;
//     int low=0,high=n-1;
//     int mid=0;
//     while(low <high){
//         mid=(high+low)/2;
//         if(a[mid]==val){
//             mid=(high+low)/2;
//             cout<<"number "<<val<<" is found at "<<low+1;
//             return ;
//         }
//     else if(a[mid] < val){
//             low++;
//          }
//     else if (a[mid] >val ){
//         high--;
//     }
// }
// cout<<"element not found";
// };
// int main(){
//     int arr[10]={1,2,3,4,5,10,15,20,22,50};
//     int n=10;
// print_arr(arr,n);
// binary_s(arr,n);
//     return 0;
// }


// selection sort
// #include<iostream>
// using namespace std;
// void print_arr(int *a,int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
// };
// void selection_sort(int *a,int n){
    
//     for(int i=0;i<n-1;i++){
//       int  min=i;
//         for(int j=i+1;j<n;j++){
//             if(a[min]>a[j]){
//                 min=j;
//             }
//         }
//         int temp=a[min];
//         a[min]=a[i];
//         a[i]=temp;

//     }
// }
// int main(){
// int a[10]={11,17,18,9,6,7,6,6,78,7};
// selection_sort(a,10);
// print_arr(a,10);
//     return 0;
// }


// bubble_sort 
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void print_arr(int *a,int n){
//     for(int i=0;i<n;i++){
//        cout<<a[i]<<" ";
//     }
// };
// void bubble_sort(int *a,int n){
//      for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//          if(a[j]>a[j+1]){
//             int temp=a[j];
//             a[i]=a[j+1];
//             a[j+1]=temp;
//         }
//         }
//     }
// };
// int main(){
// int a[]={1,3,4,56,67,87,10,9,8};
// int n=sizeof(a)/sizeof(int);
// cout<<n<<"\n";
// bubble_sort(a,n);
// print_arr(a,n);
//     return 0;
// }


// insertion sort
#include<iostream>
#include<algorithm>
using namespace std;
void print_arr(int *a,int n){
    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
};
void insertion_sort(int *a,int n){
    for(int i=0;i<n;i++){
        int piote=0;
        for(int j=0;j<n;j++){
            if(a[piote]>a[j]){
                piote++;
            }
        }
    }
};
int main(){
int a[]={1,3,4,56,67,87,10,9,8};
int n=sizeof(a)/sizeof(int);
cout<<n<<"\n";

print_arr(a,n);
    return 0;
}