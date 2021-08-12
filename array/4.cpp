// contains duplicate 
#include<bits/stdc++.h>
using namespace std;
bool containsduplicate(vector<int> v){
    unordered_map<int,int> count;
    for(int i:v){
        if(count.find(i) == count.end()){
            count[i]=1;
        }else{
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> v ={1,2,3,1};
    bool result = containsduplicate(v);
    return 0;
}