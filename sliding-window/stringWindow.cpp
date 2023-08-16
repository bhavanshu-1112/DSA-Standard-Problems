#include<bits/stdc++.h>
using namespace std;

/*
sliding window problem includes expansion and contraction of window
1. in this we have to create  a freq map for pattern 
2. after that we maintain a feq map for big string(window) : 
   and check at every step whether the pattern(smalll stirng ) lies in our window or not
3. once we found out the window that matches our pattern then we have to find the smallest window 
   possible
4. for this we have to contract the window from left(start), and check whether the pattern is possible
   contracting 

   Expansion -> from right
   COntraction -> from left

*/

string stringWindow(string s, string p){
    
}
int main(){
  string s, p;
  cin>>s>>p;
  cout<<stringWindow(s, p);
}