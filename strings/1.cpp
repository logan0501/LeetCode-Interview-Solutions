#include<bits/stdc++.h>
// reverse a string
using namespace std;
void reverseString(vector<char> charstring){
    int mid=charstring.size()/2;
    for(int i=0;i<mid;i++){
        swap(charstring[i],charstring[charstring.size()-i]);
    }
}
int main(){
    vector<char> charstring = {'H','a','n','n','a','h'};
    reverseString(charstring);
    return 0;
}