// find unique element in arr
#include<iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,3,2,1};
    int ans=0;       // 0^0=0  0^1=1 same means =0
    for(int i:arr){
        ans^=i;
    }
    cout<<"the unique element is :"<<ans;
}