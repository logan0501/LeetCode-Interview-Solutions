// Best time to sell and buy stock II
#include<bits/stdc++.h>
using namespace std;
int buyandsell(vector<int> arr,int n){
   int profit=0;
   for(int k=1;k<n;k++){
       if(arr[k]>arr[k-1]){
           profit+=arr[k]-arr[k-1];
       }
   }
   return profit;
}
int main(){
    vector<int> arr={7,1,5,3,6,4};
    cout<<buyandsell(arr,arr.size());
    return 0;
}