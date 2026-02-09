#include<iostream>
#include<queue>
using namespace std;
int k_largest(int *arr,int size,int k){
     priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<size;i++){
        if(arr[i] >pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main (){
int arr[6]={1,3,5,6,78,9};
cout<<k_largest(arr,6,2);
}