#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 > s2;
    }
    else if (s1[0] == s2[0])
    {
        return s1.length() < s2.length();
    }
    else
    {
        return s1[0] > s2[0];
    }
}

string concatenate(vector<int> numbers)
{
    vector<string> vs;
    for (int i = 0; i < numbers.size(); i++)
    {
        string str = to_string(numbers[i]);
        vs.push_back(str);
    }
    sort(vs.begin(), vs.end(), comp);
    string ans = "";
    for (int i = 0; i < vs.size(); i++)
    {
        ans += vs[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    string str = concatenate(numbers);
    cout << str;
    return 0;
}