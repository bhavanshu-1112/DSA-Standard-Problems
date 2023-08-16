#include<bits/stdc++.h>
using namespace std;

bool checkSubset(string big, string small){
    int i=big.length(),j=small.length();
    
    while(i>=0 and j>=0){
        if(big[i]==small[j]){
            i--;
            j--;
            
        }else{
            i--;
            
        }
    }

    if(j==-1){
        return true;
    }
    return false;
}
int main()
{
    string big;
    string small;
    cin>>big>>small;
    cout<<checkSubset(big , small);
    
}