#include<string>
#include<bits/stdc++.h>
using namespace std;

string smallestWindow(string str){
    int i=0,j=0;
    int window_size =0;
    int max_window_size = 0;
    int start_index = 0;
    
    unordered_map<char, int> ump;
    while(j<str.size()){
        char ch = str[j];
        if(ump.count(ch) and ump[ch]  >= i){
          i = ump[ch]+1;
          window_size = j-i;
        }
        ump[ch] = j;
        window_size++;
        j++;
        
        if(max_window_size < window_size){
            max_window_size  =window_size;
            start_index= i;
        }
    }
        
        return str.substr(start_index, max_window_size);

}

int main(){
    string s;
    cin>>s;
    cout<<smallestWindow(s);    
}