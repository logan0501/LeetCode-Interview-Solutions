// Plus one
#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> arr){
    vector<int> v;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]+1 < 10){
            arr[i]++;
            return arr;
        }else{
            arr[i]=0;
        }
    }    
    v.push_back(1);
    for(auto i:arr){
        v.push_back(i);
    }
    return v;
}
int main(){
    vector<int> arr = {1,2,3};
    arr=plusOne(arr);
    return 0;
}