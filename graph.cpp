#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename t>   // data type 
class graph{
     unordered_map<t, list<t>> adj;
    public:
    void addedge(t u,t v,bool direction){
        //d=1-> direacted graph
        //d=0-> undireacted graph
        adj[u].push_back(v);
        // if undirected a<->b  a to b and b to a
        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printadjlist(){
        for(auto i:adj){
            cout<<i.first<<" ->";
            for(auto j:i.second){
                cout<<j;
            }
            cout<<endl;
        }
    }
};
int main (){
graph<int>g;
int n,m;
cout<<"enter no of nodes";
cin>>n;
cout<<"enter no of edges";
cin>>m;
for(int i=0;i<m;i++){
    int u,v;
    cin>>u,v;
    g.addedge(u,v,0);
}
g.printadjlist();

    return 0;
}