// Two sum
#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> v,int target){
    unordered_map<int,int> umap;
    vector<int> v1;
    for(int i=0;i<v.size();i++){
        if(umap.find(target-v[i])!=umap.end()){
            umap.insert({v[i],i});
        }else{
            v1={i,umap.find(target-v[i])->second};
           break;
        }
       
    }
   
    return v1;
}
int main(){
    vector<int> v={3,2,4};
    int target=6;
    v= twosum(v,target);
    for(auto i:v){
        cout<<i;
    }
;    return 0;
}