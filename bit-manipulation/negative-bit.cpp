#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0;
    cout<<~a<<endl;
}
/*
  here output is  -1
  reason : 
  at the memory level : 0 is a 32 bit number ie: 00000000000000000..00
  and ~ of (000000.....000) = 11111111....111
  first bit represents the sign for 0 -> positive, 1 -> negative
  remaing 31 bits shows magnitude of a number
  for the negative numbers if you want to find the magnitude of the number then 
  these 31 bits are stored in the form of 2's complement form
  so get into original form  - invert all the bits and add 1 to it
  111111111...11) => 000000....000 +1 = 1
*/