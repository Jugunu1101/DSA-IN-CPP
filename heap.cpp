#include<iostream>
#include<algorithm>
using namespace std;
class heap{
    int arr[50];
    int size=0;
    public:
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]= val;
        while(index> 1){
            int parent=index/2;    // 50 
             if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
             }
             else {
                return ;
             }
        }
    }
    void print(){
        for(int i=1;i<size+1;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    heap h;
    cout<<"It is a max heap Tree\n";
    h.insert(50);
    h.insert(60);
    h.insert(70);
    h.insert(80);
    h.insert(90);
    h.print();
    return 0;
}