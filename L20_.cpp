// #include<iostream>
// using namespace std;
// void reverse_a(int *a){
//     int s=0;
//     int e=5-1;
//     // first method
//     for(int i=0;i<5;i++){
//         if(s<=e){
//             swap(a[s],a[e]);
//             s++;
//             e--;
//         }
//     }
//     //second method 

//     //     while(s<=e){
//     //   swap(a[s],a[e]);
//     //   s++;
//     //   e--;
//     //}
//     };
// int main (){
//     int a[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }cout<<endl;
// reverse_a(a);
//     //  for(int i=0;i<5;i++){
//     //     cout<<a[i]<<" ";
//     // }cout<<endl;
//     for(int i:a){
//         cout<<i<<" "; 
//     }
//     return 0;

// }


// vector reverser
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> reverse_a( vector<int> v) {
//     int s=0;
//     int e=v.size()-1;
//       while(s<=e){
//       swap(v[s],v[e]);
//       s++;
//       e--;
//     }
// return v;
//     };
// int main (){
//   vector<int> v;
//   v.push_back(12);
//   v.push_back(13);
//   v.push_back(23);
//   v.push_back(33);
//   for(int i :v){
//     cout<<i<<" ";
//   }cout<<"\n";
// vector<int> store=reverse_a(v);
//     for(int i:store){
//         cout<<i<<" "; 
//     }
//     return 0;
// }



// merge two sprted array
// #include<iostream>
// using namespace std;
// void merge_sorted_array(int *a1,int n,int *a2,int m,int *a3){
//         int i=0,j=0,k=0;
//         while (i<n && j<m)
//         {
//            if(a1[i]<a2[j]){
//             a3[k]=a1[i];
//             k++;
//             i++;
//            }
//            else {
//             a3[k]=a2[j];
//             j++;k++;
//            }
//         } 
//     while(i<n){
//         a3[k]=a1[i];
//         k++;i++;
//     }
//     while(j<m){
//         a3[k]=a1[j];
//         k++;j++;
//     }
// }
// int main(){
//     int a1[5]={1,3,5,7,9};
//     int a2[4]={2,4,6,8};
//     int a3[9];
// merge_sorted_array(a1,5,a2,4,a3);
// for(int i:a3){
//     cout<<i<<" ";
// }
//     return 0;
// }


// mmove zero;s

#include<iostream>
using namespace std;
void zero_move(int *a,int n){
   int i=0;
   for(int j=0;j<n;j++){
    // method 1
        // if(a[j]!=0){
        //     swap(a[j],a[i]);
        //     i++;
        // }
    // method 2
        if(a[j]>0){
            swap(a[j],a[i]);
            i++;
        }
   }
};
int main(){
int a[]{1,0,2,0,0,3,0};
int n=sizeof(a)/sizeof(int);
for(int i:a){
    cout<<i<<" ";
}cout<<endl;
zero_move(a,n);
for(int i:a){
    cout<<i<<" ";
}
    return 0;
}