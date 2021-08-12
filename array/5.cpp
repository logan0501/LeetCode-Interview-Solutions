// Single Number
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        int s=0;
        for(int i:nums){
            s^=i;
        }
        return s;
    }
int main(){
    vector<int> v ={1,2,3,1};
    int result = singleNumber(v);
    cout<<result;
    return 0;
}