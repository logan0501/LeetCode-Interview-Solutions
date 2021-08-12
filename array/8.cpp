// Move Zeros
#include<bits/stdc++.h>
using namespace std;
void moveZeros(vector<int> arr){
    int i=0;
    if(arr.size()>1){
        for(int j=0;j<arr.size();j++){
        if(arr[j]!=0){
            arr[i++]=arr[j];
        }
    }
    while(i<arr.size()){
        arr[i++]=0;
    }
    }
    
   
}
int main(){
    vector<int> v={0,1,0,3,12};
    moveZeros(v);
    return 0;
}