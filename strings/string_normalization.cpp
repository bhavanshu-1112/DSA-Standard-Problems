#include <bits/stdc++.h>
using namespace std;

string normalise(string sentence)
{
    string copy = sentence;

    // Make the changes in copy, and return it
    stringstream ss(copy);
    string token;
    vector<string> tokens;

    while (getline(ss, token, ' '))
    {
        tokens.push_back(token);
    }
    for (size_t i = 0; i < tokens.size(); i++)
    {
        string s = tokens[i];

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = s[0] - 32;
        tokens[i] = s;
    }
    copy = "";

    for (int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << " ";
    }
    for (size_t i = 0; i < tokens.size() - 1; i++)
    {
        copy += tokens[i];
        copy += " ";
    }
    copy += tokens[tokens.size() - 1];

    return copy;
}

int main()
{
    string sentence;
    getline(cin, sentence, '\n');
    string ans = normalise(sentence);
    cout << ans;
}