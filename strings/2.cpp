#include<bits/stdc++.h>
// reverse a integer
using namespace std;
int reverseString(int x){
string s = to_string(abs(x));
    std::reverse(s.begin(),s.end());
     try{
        if(x>0)return stoi(s);
        else
    return -1*stoi(s);  
     }   catch(exception){
         return 0;
     }
}
int main(){
    int n=123;
    reverseString(n);
    return 0;
}