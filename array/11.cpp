#include<bits/stdc++.h>
//rotate image
using namespace std;
void rotateImage(vector<vector<int>> nums){
    for(int i=0;i<nums.size();i++){
        for(int j=nums[0].size();j>0;j--){
            cout<<nums[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> nums ={{1,2,3},{4,5,6},{7,8,9}};
    rotateImage(nums);
    return 0;
}