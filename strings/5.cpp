#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    string str;
   
    for(char c:s){
        if(isalnum(c)){
            str+=tolower(c);
         }
    }
    cout<<str;
   for(int i=0,j=str.length()-1;i<str.length();i++,j--){
       if(str[i]!=str[j])
           
           return false;
   
   }
   return true;
    
    
}
int main(){
    bool result = isPalindrome("0P");
    cout<<result;
    return 0;
}