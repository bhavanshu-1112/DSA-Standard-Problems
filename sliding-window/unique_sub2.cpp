#include<bits/stdc++.h>
using namespace std;

string uniquesub(string str){
    int i=0,j=0;
    int window = 0;
    int cs = 0;
    int n = str.size();
    int start = -1;
    unordered_map<char, int> ump;
    while(j<n){
        char ch = str[j];

        if(ump.count(ch) and ump[ch]  >= i){
          i = ump[ch] +1;
          cs = j-i;
        }
        ump[ch] =j;
        cs++;
        j++;
        if(cs > window){
            window = cs;
            start =i;
        }
        
        
    }
    return str.substr(start, window);
}
int main(){
 string str;
 cin>>str;
 cout<<uniquesub(str);
}