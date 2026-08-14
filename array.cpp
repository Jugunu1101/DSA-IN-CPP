#include<iostream>
using namespace std;

void insert_into_arr(int *arr,int p,int ele,int s){
        if(p < 0  || p > s-1){
        cout<<"\ninvalid position\n";
    }
    else{
        for(int i=p;i<=s-1;i++){
          int temp=arr[i];
          arr[i]=ele;
          ele=temp;
        }
    }
}
int main (){
int arr[10]={1,2,3,4,5,1,5,8,7,8};
int pos,ele;
cout<<"enter pos :";
cin>>pos;
cout<<"enter element :";
cin>>ele;
int n=sizeof(arr)/sizeof(arr[0]);
cout<<n<<"\n";
insert_into_arr(arr,pos,ele,10);
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    cout<<arr[i]<<" ";
}
}