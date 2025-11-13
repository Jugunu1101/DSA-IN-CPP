// #include<iostream>
// using namespace std;
// void print_arr(int arr[],int l){
//      cout<<"the element in array\n";
//      for(int i=0;i<l;i++){
//         cout<<arr[i]<<" ";
//      }
//         cout<<"\n";
// };
// void insert(int a[],int size){
//     cout<<"enter element is array :\n";
//     for(int i=0;i<size;i++){
//             cin >>a[i];
//     }
//     cout<<"\n";
// };

// void max_no(int a[],int n){
//     int MX=a[0];
//     for(int i=0;i<n;i++){
//         if(MX < a[i])  MX=a[i];
//     }
// cout<<"the max in array is "<<MX<<"\n";
// }

// void min_no(int a[],int n){
//     int MN=a[0];
//     for(int i=0;i<n;i++){
//         if(MN > a[i])  MN=a[i];
//     }
// cout<<"the max in array is"<<MN<<"\n";
// }

// int main (){
// // int arr[15]={0};
// int a[5];
// int len=sizeof(a)/sizeof(int);
// insert(a,len);
// max_no(a,len);
// min_no(a,len);
// // insert(a,len);
// // print_arr(a,len);
// // print_arr(arr,15);
//     return 0;
// }



// #include<iostream>
// using  namespace std;
// int main (){
//     int a[5];
// cout<<"Enter element in array :\n";
// for(int i=0;i<5;i++){
//     cin>>a[i];
// }
// int sum=0;
// for(int i=0;i<5;i++){
//     sum+=a[i];
// }
// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }
// cout<<"\n";
// cout<<"The sum of array is "<<sum;

//     return 0;
// }


// linear search
// #include<iostream>
// using  namespace std;
// bool search(int *a,int size,int key){
//     for(int i=0;i<size;i++){
//         if(a[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// };
// int main (){
// int a[5];
// cout<<"enter 5 element in arrAY:";
// for(int i=0;i<5;i++){
//     cin>>a[i];
// }
// int key;
// cout<<"enter no u wanted to search :";
// cin>>key;
// if(search(a,5,key)){
//     cout<<"the number "<<key<<" is found ";
// }
// else {
//     cout<<"the number "<<key<<" is not found";
// }
//     return 0;
// }


// Reverse
// #include<iostream>
// using  namespace std;
// void reverse(int *a,int size){
//     int start=0,end=size-1;
//     while(start<=end){
//         swap(a[start],a[end]);
//         start++;
//         end--;
//     }
// };
// int main (){
//     int arr[5]={1,2,3,4,5};
//     int brr[6]={1,2,3,4,5,6};

// reverse(arr,5);
// reverse(brr,6);

// for(int i=0;i<5;i++){
//     cout<<arr[i];
// }
// cout<<"\n";
// for(int i=0;i<6;i++){
//     cout<<brr[i];
// }
//     return 0;
// }


// swap
// #include<iostream>
// using namespace std;
// int main (){
//     int a[5]={2,1,4,3,6};
//     int size=sizeof(a)/sizeof(int);
// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }
// cout<<"\n";

// for(int i=0;i<5;i+=2){
//     if(i+1<size){
//     int temp=0;
//     temp=a[i];
//     a[i]= a[i+1];
//     a[i+1]=temp;
//     }
// }

// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void print(int *a,int size){
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<"\n";
// };
// void unique(int *a,int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^a[i];
//         cout<<ans<<" ";
//     }
//     cout<<"\n"<<ans;
// };
// int main(){
//     int a[]={1,1,2,3,2,4,6,5,6,5,4};
//     int size=sizeof(a)/sizeof(int);
// unique(a,size);
//     return 0;
// }


// find presence of element
// #include<iostream>
// using namespace std;
// void present(int *a,int *b,int s1,int s2){
//     for(int i=0;i<s1;i++){
//         int val=a[i];
//         for(int j=0;j<s2;j++){
//             if(val==b[j]){
//             cout<<b[j]<<" ";
//             b[j]=-9999;
//             break;
//             }
//         }
//     }

// };
// int main(){
// int a[5]={1,2,3,4,5};
// int b[6]={6,7,8,9,1,5};
// present(a,b,5,6);
//     return 0;
// }


#include<iostream>
#include<algorithm>
using namespace std;
void print_arr(int *a,int n){
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<"\n";
};
void sort_one_two(int *a,int n){
    // method two
    int left=0,right=n-1;
    while (left < right)
    {
        while(a[left]==0 &&left<right){
            left++;
        }
        while(a[right]==2 && left<right){
           right--;
        }

        if(left < right){
            if(a[left] == 2 && a[right] == 0){
                swap(a[left], a[right]);
                left++;
                right--;
            }
            else if(a[left] == 2 && a[right] == 1){
                swap(a[left], a[right]);
                right--;
            }
            else if(a[left] == 1 && a[right] == 0){
                swap(a[left], a[right]);
                left++;
            }
            else{
                left++;
        }
    }}
    
};
int main (){
    int a[]={0,1,2,0,1,2,1,2,0,0,0};
    int n=sizeof(a)/sizeof(int);
    // sort(a,a+n);     // method one
    print_arr(a,n);
    sort_one_two(a,n);
    print_arr(a,n);
    return 0;
}