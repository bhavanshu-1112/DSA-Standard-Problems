#include<bits/stdc++.h>
using namespace std;

int getIthbit(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}
int setIthbit(int &n ,int i){
    int mask = (1<<i);  
    n = (n|mask);

}
int clearIthbit(int &n, int i){
    int mask  = ~(1<<i);
    n = (n & mask);
}

void updateIthbit(int &n, int i, int value){
  //setnbit + clear bit
  clearIthbit(n,i);
//   cout<<n<<" ";
  int mask = (value << i);
//   cout<<mask<<" ";
  n = (n|mask);
}

void clearLastBits(int &n, int i){
    int mask = (-1 << i);
    n = n & mask;
}
int main(){
    int n = 15;
    int i;
    cin>>i;
    // cin.get();
    // cout<<getIthbit(n,i);
    // setIthbit(n,i);

    // clearIthbit(n,i);

    // updateIthbit(n,i,0);

    clearLastBits(n,i);
    cout<<n;
}