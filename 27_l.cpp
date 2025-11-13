// 3,934,842
// #include<iostream>
// using namespace std;
// int main(){
//     int i= 5;
//     // j is reeference variable
//     int &j=i;
//     cout<<i<<" ";
//     j++;
//     cout<<i<<" ";
//     i++;
//     cout<<i<<" ";

//     return 0;
// }


// 28 L
// #include<iostream>
// using namespace std;
// int main(){
//     // int *i=new int;
//     // *i=900089;
//     // cout<<*i;

//     int *arr=new int[10];
//     arr[0]=12;
//     arr[1]=13;
//     arr[2]=14;
//     arr[3]=15;
//     arr[4]=16;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// l 29 dynamic 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     int **arr=new int *[row];
//     for(int i=0;i<row;i++){
//         arr[i]=new int[col];
//     }

//     cout<<"enter "<<row*col<<" element :\n";
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }
//      cout<<"array element are :\n";
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

//     cout<<"deleting dynamic memory";
//     for(int i=0;i<col;i++){
//         delete []arr[i];
//     }
//     delete []arr;
// cout<<" after delete ";
//     cout<<arr[0][0];
//     return 0;
// }


