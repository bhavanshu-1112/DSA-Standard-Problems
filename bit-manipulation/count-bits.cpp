#include<bits/stdc++.h>
using namespace std;

int countBits(int n){
    int count =0;
    while(n>0){
        count += (n&1);
        n = n>>1;

    }
    return count;
}
int main(){
  int n;
  cin>>n;
  cout<<countBits(n);
}