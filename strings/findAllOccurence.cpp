#include<bits/stdc++.h>
using namespace std;
int main()
{
    string para = "hi leetcode is great coding platform, other codes are platforms and not codeforces, codechef";
    string word;
    getline(cin, word);

    int n = word.length();
    int index = para.find(word);
        // cout<<index;
        while(index!=-1){
            cout<<index<<" ";
            index = para.find(word, index+1);

        }
        return 0;
}