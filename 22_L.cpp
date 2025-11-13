// #include<iostream>
// using namespace std;
// // find length
// int getlength(char ch[]){
//     int count=0;
//     for(int i=0;ch[i]!='\0';i++){
//         count++;
//     }
//     return count;
// };
// // reversev the string 
// void  reverse(char ch[]){
//     int length=getlength(ch);
//     int f=0;
//     int l=length-1;
//     while(f<l){
//         swap(ch[f],ch[l]);
//         f++;
//         l--;
//     }
// }
// int main (){
// char ch[20];
// cout<<"enter the string ";
// cin.getline(ch,20);
// cout<<" your name is :\n"<<ch<<endl;
// cout<<"length of string is :\n"<<getlength(ch)<<endl;
// reverse(ch);cout<<endl;
// cout<<"your reverse string is :\n"<<ch;
//     return 0;
// }




// // string is palindrome or not
// #include<iostream>
// using namespace std;
// // find length
// int getlength(char ch[]){
//     int count=0;
//     for(int i=0;ch[i]!='\0';i++){
//         count++;
//     }
//     return count;
// };
// int palindrome(char ch[]){
//     int n=getlength(ch);
//     int first=0;
//     int last=n-1;
//         while(first<last){
//             if(ch[first]!=ch[n-1]){
//                 return 0;
//             }
//             else {
//                 first++;
//                 last--;
//             }
//         }
//         return 1;
// };
// int main(){
//     char ch1[20];
//     cout<<"enter string ";
//     cin.getline(ch1,20);
// if(palindrome(ch1)==1){
//     cout<<ch1<<" it is a palindrome string";
// }
// else {
//     cout<<ch1<<" is not palindrome";
// }
// // int n=sizeof(ch1)/sizeof(char);
// // cout<<n;
//     return 0;
// }



// size of any digit

// #include<iostream>
// using namespace std;
// int main() {
//     int num = 1234;
//     int count = 0;

//     int temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         cout<<temp<<endl;
//         count++;
//     }
// //     int count1=0;
// //      int temp1 = num;
// //     while (temp1 != 0) {
// //         temp %= 10;
// //         count1++;
// //     }
// // cout<<count1<<endl;
//     cout << "Number of digits: " << count << endl;
//     return 0;
// }



// // // reverse a digit  // palindrome or not
// #include<iostream>
// using namespace std;
// // reverse a digit
// int reverse(int n){
//     if(n<0) return 0;
//     int ans=0;
//     while (n!=0)
//     {
//         int digit=n%10;  // last digit =remindar
//         ans=(ans*10)+digit;
//         n/=10  ; // temp se bar bar is digit pop ho jayegi 
//     }
//     return ans;
// };
// int main(){
//     int i=-1281;
//     int n=reverse(i);
//     cout<<i<<endl;
//     cout<<n<<endl;
// if(n==i){
//     cout<<"palindrome";
// }
// else {
//     cout<<"not";
// }
//     return 0;
// }



// remove all occurence of that  substring
// #include<iostream>
// using namespace std;
// int main(){
// string s="daabcbaabcbc";
// string part="abc";
// while (s.length()!=0 && s.find(part) <s.length())
// {
//     s.erase(s.find(part),part.length());
// }
// cout<<s;
//     return 0;
// }