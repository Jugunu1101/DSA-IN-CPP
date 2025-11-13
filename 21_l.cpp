// rotate array 
// #include<iostream>
// using namespace std;
// void rotate(int *a,int n){
//     cout<<"enter the step of rotation";
//     int k;
//     cin>>k;
//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[(k+i)%(n)]=a[i];
//     }
//     // copy form temp
//     for(int i=0;i<n;i++){
//         a[i]=temp[i];
//     }
// };
// int main(){
//     int a[]={1,2,3,4,5,6,7};
//     int n=sizeof(a)/sizeof(int);
//     rotate(a,n);
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     cout<<endl<<3%4;
//     return 0;
// }


// sorted and rotated
#include<iostream>
using namespace std;
bool sorted_rotated(int *a,int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
    cout<<"1 :"<<count<<endl;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    cout<<"2 :"<<count<<endl;
    }
    cout<<count<<endl;
    return count<=1;
};
int main(){
    int a[]={2,1,3,4};
    int n=sizeof(a)/sizeof(int);
if(sorted_rotated(a,n)){
    cout<<"all good";
}
else {
    cout<<" not all rotaded & sorted";
}
    return 0;
}