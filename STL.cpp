// array
// #include<iostream>
// #include<array>
// using namespace std;
// int main (){
//     // basic
//     int arr[5]={1,2,3,4,5};
//     // stl
//     array<int,4> a={1,2,3,7};
//     int size=a.size();
//     cout<<size<<"\n";
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
// cout<<"\n";
//     cout<<"AT index a"<<a.at(2);
//     cout<<"\n";
//     cout<<" element in first"<<a.front();
//     cout<<"\n";
//     cout<<" element in last"<<a.back();
//     cout<<"\n";
// cout<<" array is empty or not"<<a.empty();
//     cout<<"\n";
//     return 0;
// }

// vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main (){
// vector<int> v;
// v.push_back(12);
// v.push_back(1);
// v.push_back(3);
// cout<<"capacity "<<v.capacity()<<endl;
// cout<<"size of vector "<<v.size()<<endl;
// v.push_back(4);
// cout<<"capacity "<<v.capacity()<<endl;
// cout<<"size of vector "<<v.size()<<endl;

// v.push_back(444);
// cout<<"capacity "<<v.capacity()<<endl;
// cout<<"size of vector "<<v.size()<<endl;

// cout<<"first element "<<v.front()<<endl;
// cout<<"LAst element "<<v.back()<<endl;
// cout<<" empty or not "<<v.empty()<<endl;

// cout<<"before pop_back"<<endl;
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;

// v.pop_back();
// cout<<"after  pop_back"<<endl;
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;

// vector<int> vect(5,1);
// for(int i=0;i<v.size();i++){
//     cout<<vect[i]<<" ";
// }
// cout<<endl;
//     return 0;
// }

// deque (double ended queue)
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {

//     deque<int> d;
//     d.push_front(12);
//     d.push_front(93);
//     d.push_front(943);
//     d.push_front(2003);
//     d.push_front(2039);
//     d.push_front(43);
//     d.push_front(2003);
//     d.push_back(3);
//     cout << "size of dqueue " << d.size() << endl;

//     cout << "before pop_back" << endl;
//     for (int i : d)
//     {
//         cout << i<<" ";
//     }
//     cout << endl;

//     d.pop_back();
//     cout << "after pop_back" << endl;
//     for (int i : d)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "first element " << d.front() << endl;
//     cout << "last element " << d.back() << endl;
//     cout << "empty 1 or not 0 " << d.empty() << endl;

//     cout << "before pop_front" << endl;
//     for (int i : d)
//     {
//         cout << i<<" ";
//     }
//     cout << endl;

//     d.pop_front();
//     cout << "after pop_front" << endl;
//     for (int i : d)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     d.erase(d.begin(), d.begin() + 1);
//     cout << "after pop_back" << endl;
//     for (int i : d)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//        cout << "size of dqueue " << d.size() << endl;
//        cout<<" after using clear "<<endl;
//     d.clear();
//      for (int i : d)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// set
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(12);
//     s.insert(2);
//     s.insert(1);
//     s.insert(10);
//     s.insert(92);
//     s.insert(1002);
//     cout << "the size of set is :" << s.size() << "\n";
//     for (auto i : s)
//     {
//         cout << i << " ";
//     }
//     cout<<"\n";
//     s.erase(s.begin());
//     cout<<"after erase \n";
//     for (auto i : s)
//     {
//         cout << i << " ";
//     }
// cout<<"print 10 is present or not "<<s.count(2)<<endl;

//     return 0;
// }


// map
// #include<iostream>
// #include<map>
// using namespace std;
// int main (){
//     map<int,string> m;
//     m[1]="nitin";
//     m[2]="neeraj";
//     m[3]="jatin";
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
// cout<<"after insertion\n";
// m.insert({5,"kumar"});
// cout<<"find 5 1/0 : "<<m.count(5);
// cout<<"before erase\n";
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
// cout<<"after erase\n";
// m.erase(5); 
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<"\n";
// }
//     return 0;
// }



// algorithm 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    vector<int >v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(30);
    v.push_back(37);
    v.push_back(38);

cout<<" 0 for not found 1 for found\n";
cout<<binary_search(v.begin(),v.end(),5)<<endl;
cout<<" 0 for not found 1 for found\n";
cout<<binary_search(v.begin(),v.end(),3);
cout<<"\n lower bound\n";
cout<<lower_bound(v.begin(),v.end(),2 ) -v.begin()<<endl;

int a= 2,b=3;
cout<<"max "<<max(a,b); 
cout<<"min "<<min(a,b);
cout<<"swap ";
swap(a,b);
cout<<" a= "<<a;
cout<<" b="<<b<<endl;
string s="abcd";
cout<<"reverse string :";reverse(s.begin(),s.end());
cout<<s;
cout<<"\n";
rotate(v.begin(),v.begin()+1,v.end());
for(int i: v){
    cout<<i<<" ";
}

    return 0;
}