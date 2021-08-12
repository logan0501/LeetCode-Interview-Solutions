// Remove Duplicates from Sorted Array
#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int> arr,int n){
    int i=1;
    for(int k=2;k<n;k++){
        if(arr[i]==arr[k]){
            continue;
        }else{
            i++;
            arr[i]=arr[k];
        }
    }
    if (arr.size()>0)
    return i+1;
    else
    return 0;
}
int main(){
    vector<int> arr={0,0,1,1,1,2,2,3,3,4};
    cout<<removeduplicates(arr,arr.size());
    return 0;
}