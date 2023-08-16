#include <bits/stdc++.h>
using namespace std;

string extractKeyfromString(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }

    return (string)s;
}

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * p;
        p = p * 10;
    }
    return ans;
}
bool toNumeric(pair<string, string> p1, pair<string, string> p2)
{
    string k1 = (p1.second);
    string k2 = (p2.second);

    return convertToInt(k1) < convertToInt(k2);
}
bool toLexicographic(pair<string, string> p1, pair<string, string> p2)
{
    string s1 = p1.second;
    string s2 = p2.second;
    return s1 < s2;
}
int main()
{
    int n;
    cin >> n;
    cin.get(); // to consume the extra \n
    string s;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        v.push_back(s);
    }

    int key;
    string reversal, order;
    cin >> key >> reversal >> order;

    vector<pair<string, string>> vp;
    for (int i = 0; i < v.size(); i++)
    {

        vp.push_back({v[i], extractKeyfromString(v[i], key)});
    }
    if (order == "numeric")
    {
        sort(vp.begin(), vp.end(), toNumeric);
    }
    else
    {
        sort(vp.begin(), vp.end(), toLexicographic);
    }

    if (reversal == "true")
    {
        reverse(vp.begin(), vp.end());
    }

    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << endl;
    }
}