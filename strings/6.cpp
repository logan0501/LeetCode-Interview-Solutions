#include<bits/stdc++.h>
using namespace std;
int myatoi(string s){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long sum=0;
    int len = s.length();
    int i=0;
    int sign=1;
    while (s[i]==' '&& i<len)i++;
    if(s[i]=='+')i++;
    else if(s[i]=='-')i++,sign=-1;
    
    for(;i<len;i++){
        if(s[i] <'0' or s[i]>'9')break;
        sum=sum*10+(s[i]-'0');
        if(sum>INT_MAX)return sign==1?INT_MAX : INT_MIN;
    }
    return sign==1?sum:sum*-1;
}
int main(){
    string s = "42";
    int result = myatoi(s);
    return 0;
}