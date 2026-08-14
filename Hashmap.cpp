#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
        //insertion
    pair<string,int>p1=make_pair("love",4);
    m.insert(p1);
        //insertion
    pair<string,int>p2("babbar",4);
    m.insert(p2);
    //insertion
    m["mera"]=3;

    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    // //error
    // cout<<m.at("hlo")<<endl;
    // no error
    cout<<m["hlo"]<<endl;
    // size
    cout<<m.size()<<endl;
    // to check presence
    cout<<m.count("bro");
        return 0;
}