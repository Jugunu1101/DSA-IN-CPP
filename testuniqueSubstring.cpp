#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;
int uniqueSubstring(string str){
    unordered_map<char, int> m;
    int left =0;
    int  right=0;
    for(right=0;right<str.length();right++){
        if(m.find(str[right])!=m.end()){
            m[str[right]]=right;
        }
        else {
            left=m[right]+1;
            m[str[right]]=right;
        }
    }
    return right-left;
};
int main (){
    string s="pwwkew";
 cout<<uniqueSubstring(s);
}