// #include<iostream>
// using namespace std;
// // including file HERO.cpp
// #include"HERO.h"
// int main (){
// Hero obj;
// obj.level=10;
// obj.name="Thor";
// obj.Health=0;
// cout<<obj.name<<"\n";
// cout<<obj.level<<"\n";
// cout<<"Health :"<<obj.Health;
// return 0;
// }



// #include<iostream>
// using namespace std;
// class hero{
// int level ;
// string name;
// public :
// void set_name(string n){
//     cout<<"this is setter\n";
//         name =n;
// }
// void set_level(int l){
//      cout<<"this is setter\n";
//     level=l;
// }
// int get_level(){
//     //  cout<<"this is Getter\n";
//     return level;
// }
// string  get_name(){
//      return name;
// }
// };
// int main (){
// hero obj;
// obj.set_name("thor");
// obj.set_level(10);
// cout<<"\nthe name is :"<<obj.get_name(); 
// cout<<"\nthe level is :"<<obj.get_level();
// cout<<endl;
// // dynamic allocation
// hero *h2= new hero;
// h2->set_level(23);
// h2->set_name("loki");

// cout<<h2->get_name();
// cout<<endl;
// cout<<h2->get_level();
// return 0;
// }


// encapsulation
// inheritance 
// polymoriphsm
#include<iostream>
using namespace std;
class h{
public :
void s(){
    cout<<"base class";
}
};
class c1 :public h
 {
public :
void s(){
    cout<<"child class 1";
}
};
class c2: public h{
public :
void s(){
    cout<<"child  class 2";
}
};
int main (){
c2 obj1;
obj1.s();
return 0;
}