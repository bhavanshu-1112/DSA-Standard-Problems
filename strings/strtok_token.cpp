#include<bits/stdc++.h>
using namespace std;

int main(){
  char input[10000]; // strtok works only on char arrays / int arrys and not on strings
  cin.getline(input,10000);

  char *token  = strtok(input, " ");

  while(token!=NULL){
    cout<<token<<endl;
    token = strtok(NULL," ");
  }
 return 0;

}