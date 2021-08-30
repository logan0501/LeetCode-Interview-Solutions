#include<bits/stdc++.h>
// find first unique character in a string
using namespace std;
int firstUniqueChar(string s){
    unordered_map<char,int> umap;
    for(int i=0;s[i]!='\0';i++){
        if(umap.find(s[i])!=umap.end())umap[s[i]]++;
        else
        umap.insert({s[i],1});
    }
    for(int i=0;s[i]!='\0';i++){
     
        if(umap[s[i]]==1)
            return i;
    }
    return -1;
}
int main(){
    string s="leetcode";
    int index = firstUniqueChar(s);
    cout<<index;
    return 0;
}