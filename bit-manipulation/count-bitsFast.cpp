#include<bits/stdc++.h>
using namespace std;

int countBitsFast(int n){
    int ans = 0;
    while(n > 0){
        n = n & (n-1); // removes the last set bit from the current number
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<countBitsFast(n);
}