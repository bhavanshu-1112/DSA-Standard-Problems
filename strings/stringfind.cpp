#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	string para = "how are you, i am fine";
	size_t num = para.find(s); /// this is signed integer so it will return -1 if not found
	if(num==-1){
		cout<<"string not found";
	}else{
		cout<<num;
	}
	return 0;
}