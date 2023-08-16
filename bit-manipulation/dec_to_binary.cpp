#include<bits/stdc++.h>
using namespace std;

int fastExpo(int a, int n){
    int ans = 1;
    while(n> 0){
        int last_bit = (n&1);
        if(last_bit){
         ans = ans*a;    
        }
        a = a*a;
        n = n>>1;
    }
}
int decToBin(int n){
    int ans = 0;
    int i=0;
    while(n > 0){
        int rem = n%2;
        n = n/2;
        ans += rem*pow(10, i);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decToBin(n);
}