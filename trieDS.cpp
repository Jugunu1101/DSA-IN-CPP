#include<iostream>
#include<string>
using namespace std;
class TrieNode {
    public:
    char val;
    TrieNode *childern[26];
    bool isTerminal;
    TrieNode(char d){
        val=d;
        for(int i=0;i<26;i++){
            childern[i]=NULL;
        }
        isTerminal=false;
    }
};
class trie{
    // insert 
    void insert_node(TrieNode *root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        int i=word[0]-'A';
        TrieNode *child;
        //insert
        if(root->childern[i]!=NULL){
            child=root->childern[i];
        }
        else {
            child=new TrieNode(word[0]);
            root->childern[i]=child;
        }
        // recursion
        insert_node(child,word.substr(1));
    }
    // search 
    bool search_word(TrieNode *root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int i=word[0]-'A';
        TrieNode *child;
        if(root->childern[i]!=NULL){
            child=root->childern[i];
        }
        else {
            return false;
        }
        return search_word(child,word.substr(1));
    }
    public:
    TrieNode *root;
    trie(){
        root=new TrieNode('\0');    // allocated memory
    }
    // insertion fun()
    void insert_word(string word){
        insert_node(root,word);
    }

    // search fun()
    bool search_word(string word){
        return search_word(root,word);
    }

};
int main (){
    trie *t=new trie();
    t->insert_word("ABCDE");
    t->insert_word("HLO");
    cout<<"Present or Not :"<<t->search_word("HLO");
    return 0;
}