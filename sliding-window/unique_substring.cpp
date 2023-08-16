#include<bits/stdc++.h>
using namespace std;

string uniqueSubstring(string str)
{   
    int n =str.size();
    int i=0,j=0;
    int window = 0;
    int max_window =0;
    int start_window = -1;
    unordered_map<char, int> ump;
    while(j<n){
      char ch  = str[j];
      if(ump.count(ch) and ump[ch] >= i){
         i = ump[ch] + 1;
         window = j-i;//update remaining window length excluding current character
      }
      // update the last occu.
      ump[ch] = j;
      window += 1;
      j++;

      // update max_window at every step
      if(window  > max_window){
        max_window = window;
        start_window = i;
      }

    }

    return str.substr(start_window, max_window);
}

int main(){
  string s1;
  cin>>s1;

  cout<<uniqueSubstring(s1);
}