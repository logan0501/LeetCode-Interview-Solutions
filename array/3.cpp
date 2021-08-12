//rotate array
#include<bits/stdc++.h>
using namespace std;
void rotatearray(vector<int> v,int k){
    vector<int> v1;
    int n = v.size();
   if(n>1){
       k=k%n;
        for(auto i=n-k;i<n;i++){
        v1.push_back(v[i]);
    }
    for(int i=0;i<n-k;i++){
        v1.push_back(v[i]);
    }
    
    v1.shrink_to_fit();
  v=v1;                          
}
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};
    int k=3;
    rotatearray(v,k);
    return 0;
}