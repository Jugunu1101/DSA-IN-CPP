#include<iostream>
#include<algorithm>
using namespace std;
class heap{
    int arr[50]={0};
    int size=0;
    public:
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]= val;
        while(index> 1){
            int parent=index/2;    // 50 
             if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
             }
             else {
                return ;
             }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void del_(){
        arr[1]=arr[size]  ;// size=last index
        size--;
        //
        int i=1;
        while(i <size){
            int leftindex=i*2;      
            int rightindex=i*2+1;
            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i],arr[leftindex]);
            }
            else if(rightindex <size && arr[i] <arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else {
                return;
            }
        }
    }
};
void heapify(int *arr,int size,int i ){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<= size && arr[largest]< arr[left]){
        largest=left;
    }
    if(right <= size && arr[largest]< arr[right]){
        largest= right;
    }
    if(largest!=i){
       swap(arr[largest],arr[i]);
       heapify(arr,size,largest);   // fun call
    } 
}
void heapsort(int *arr,int n){
    int size=n;
     while(size > 1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1); 
     }
}
int main(){
    heap h;
    cout<<"It is a max heap Tree\n";
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(80);
    h.insert(90);
    h.print();
    h.del_();
    h.del_();
    h.print();

    cout<<"heapify \n";
    int arr[8]={-1,20,50,56,60,70,20,10};
    int size=8;
    for(int i=size/2;i>0;i--){
        heapify(arr,size,i);
    }
    // print
    for(int i=1;i<size;i++){
        cout<<arr[i]<<" " ;
    }cout<<endl;


    heapsort(arr,size);
    for(int i=2;i<=size;i++){
        cout<<arr[i]<<" " ;
    }
    return 0;
}