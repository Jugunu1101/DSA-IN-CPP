#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"enter a charcter ";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        printf("lower case \n");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("upper case ");
    }
    return 0;
}