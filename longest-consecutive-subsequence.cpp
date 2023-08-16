#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSubsequence(vector<int> v){        
        int n = v.size();
      map<int, bool> mp;
      for(int i=0;i<n;i++){
          mp[v[i]] = true;
      }
      
      for(auto x:mp){
          if(mp.find(x.first-1)!=mp.end()){
              x.second = false;
          }
      }
      int max_length =0;
      for(auto x:mp){
          if(x.second==true){
              int len = 1;
              
                  while(mp.find(x.first + len)!=mp.end()){
                      len++;
                  }
                  
                  max_length = max(max_length, len);
              }
          }
          return max_length;
      
    }

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        
    }
    int length = longestConsecutiveSubsequence(v);
}