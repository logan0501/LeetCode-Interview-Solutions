#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack,string needle){
    int i=0;
    if(needle=="")return 0;
    while(i<haystack.length()){
        int needleindex=0;
         
        if(haystack[i]==needle[needleindex]){
            int temp=i;
            i++;
            needleindex++;
        
            while (needleindex<needle.length())
            {   cout<<needle[needleindex];
                if(needle[needleindex]!=haystack[i]){
                  
                    break;
                }
                  needleindex++;
                   i++;
            }
            if(needleindex==needle.length()){
                    return temp;
            }
          
           
        }
        i++;
    }
    return -1;
}
int main(){
    int result =strStr("mississippi","issip");
    cout<<result;
    return 0;
}