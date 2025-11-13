// fibo serise

// #include<iostream>
// using namespace std;
// int fibo(int n){
//         // if(n==1) return 0;
//         // if(n==2) return 1;
//         if( n==0 ) return 0;
//         if( n==1) return 1;

// return fibo(n-1) + fibo(n-2);
// }
//  int main(){
//     int n;
//     cout<<" enter a no of serise \n";
//     cin>>n;
//     int f=fibo(n);
//     cout<<"At "<<n <<" " <<f<<" is present in fibo serise";
//  }

// count stair

// #include<iostream>
// using namespace std;
// int count_W_stair(int n,int souce=0){
//         if(n<0) return 0;
//         if(n==0) return 1;

//         int ans= count_W_stair(n-1) + count_W_stair(n-2);
//         return ans;
// };
//  int main(){
//     int n;
//     cout<<" enter a no :";
//     cin>>n;
//     cout<<count_W_stair(n);

//  }

// say Digit
// #include<iostream>
// using namespace std;
// void  say_no(int n ,string *arr){
//     if(n==0 ) return ;

//     int digit = n%10;
//     n=n/10;
//     say_no(n,arr);
//     cout<<arr[digit]<<" ";

// }
//  int main(){
//     int n;
//     cout<<" enter a no :";
//     cin>>n;
//     string arr[10]={"Zero","one",
//         "two","three","four",
//         " five", "Six","Seven",
//         "Eigth", "Nine" };
//   say_no(n,arr);

//  }

// sorted or not
// #include<iostream>
// using namespace std;
// bool sorted_nor(int *arr,int size){

//     if( size==0 || size==1 ) return true ;
//     if(arr[0]> arr[1]) {
//         return false;
//     }
//     else {
//         bool a= sorted_nor(arr+1,size-1);
//         return a;
//     }
// };
//  int main(){
//   int arr[100];
//   int n ;
//   cout<<" enter size of arr :";
//   cin>> n;
//   for(int i=0;i<n;i++) {
//         cin>>arr[i];
//   }
// if(sorted_nor(arr,n)){
//     cout<<"Array is sorted \n";
// }
// else {
//     cout<<" Not sorted ";
// }
//  }

// sum  of arr
// #include<iostream>
// using namespace std;
// int sum_arr(int *arr,int size){
//     if(size==0) return 0;
//     if(size==1 ) return arr[0];
//     int remain= sum_arr(arr+1,size-1);
//     int sum=arr[0] + remain;
//     return sum;
// };
//  int main(){
//   int arr[100];
//   int n ;
//   cout<<" enter size of arr :";
//   cin>> n;
//   for(int i=0;i<n;i++) {
//         cin>>arr[i];
//   }
// cout<<sum_arr(arr,n);
//  }

// linear search
// #include <iostream>
// using namespace std;
// bool linear_search(int *arr, int size, int target)
// {
//   if (size == 0)
//   {
//     return false;
//   }
//   if (arr[0] == target)
//   {
//     return true;
//   }
//   else
//   {
//     bool ans = linear_search(arr + 1, size - 1, target);
//     return ans;
//   }
// };
// int main()
// {
//   int arr[10] = {1, 2, 3, 5, 7, 9, 7, 9, 10, 11};
//   int n;
//   cout << " enter size of arr :";
//   cin >> n;
//   int t;
//   cout << " enter number yo wnated to serach : ";
//   cin >> t;
//   bool ans=linear_search(arr, n, t);
//   if (ans)
//   {
//     cout << "found";
//   }
//   else
//   {
//     cout << "not found";
//   }
//   return 0;
// }

// binary serach
// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool binary_src(int *arr, int target, int start, int last)
// {
//   if (start > last)
//   {
//     return false;
//   }
//   int mid = start + (last - start) / 2;
//   if (arr[mid] == target) 
//   {
//     return true;
//   }
//   if (arr[mid] < target)
//   {
//     return binary_src(arr, target, mid + 1, last);
//   }
//   else
//   {
//     return binary_src(arr, target, start, mid - 1);
//   }
// };
// int main()
// {
//   int arr[10] = {1, 2, 3, 5, 7, 9, 7, 9, 10, 11};
//   sort(arr, arr + 10);
//   int n;
//   cout << " enter size of arr :";
//   cin >> n;
//   int t;
//   cout << " enter number yo wnated to serach : ";
//   cin >> t;
//   if (binary_src(arr, t, 0, n))
//   {
//     cout << "found";
//   }
//   else
//   {
//     cout << "not found";
//   }
//   return 0;
// }