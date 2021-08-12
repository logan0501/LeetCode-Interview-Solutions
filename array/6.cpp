// Intersection of Two Arrays II
#include<bits/stdc++.h>
using namespace std;
vector<int> findintersection(vector<int> v1,vector<int> v2){
    vector<int> v;
    unordered_multiset<int> s1(v1.begin(),v1.end());
    unordered_multiset<int> s2(v2.begin(),v2.end());
    for(auto i:s1){
        if(s2.find(i)!=s2.end()){
            s2.erase(s2.find(i));
            v.push_back(i);
        }else{
            continue;
        }
    }
    return v;
}
int main(){
    vector<int> v1 ={1,2,2,1};
    vector<int> v2 = {2,2};
    vector<int> v= findintersection(v1,v2);
    return 0;
}