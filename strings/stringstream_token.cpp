#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    // this is a sunny day

    //create a stringstream object
    stringstream ss(input);
    // accepts >> and  << operater , used for read and write of string stream
     
    string token;
    vector<string> tokens;
    while(getline(ss, token, ' ')){
       tokens.push_back(token);
    }
    for(string token : tokens){
        cout<<token<<", ";
    }
    return 0;

}