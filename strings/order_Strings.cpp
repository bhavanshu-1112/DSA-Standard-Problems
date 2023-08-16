/*Given a list of  strings , each consisting of digits and spaces, the number of spaces is the same
for each entry,
the goal is to implement a variation of a sort command. None of the strings contains consecutive spaces.
 Also, no string
starts with a space nor ends with it. Spaces are used to divide string into columns, which can
 be used as keys in comparisons.
The program has to support the required parameters:
key: integer denoting the column used as a key in comparisons. The left-most column is denoted by .
reversed: boolean variable indicating whether to reverse the result of comparisons
comparison-type: either lexicographic or numeric. Lexicographic means that we use Lexicographical
order where for example .
Numeric means that we compare the strings by their numerical values, so . If the comparison type is
numeric and numeric values
 of keys of  and  are equal for , then  is considered strictly smaller than  because it comes first.
Input Format

In the first line, there is a single integer  denoting the number of strings to sort. In the -th of
the
following  lines there
is a string . In the last line, there are  space-separated values, denoting the values of variables
 key, reverse, comparison

Constraints

None of the strings contains consecutive spaces
No string starts with a space nor ends with it
All column values in all the strings are unique
Output Format

Print exactly  lines. In the -th of them, print the -th string in the resulting order.

Sample Input 0

3
122
12
13
1 false lexicographic
Sample Output 0

12
122
13
Explanation 0

There is only 1 key, reversal is false and the order of comparison is lexicographic.
 Therefore, the output is 12, 122 and 13.

Sample Input 1

3
122
12
13
1 true lexicographic
Sample Output 1

13
122
12
Explanation 1

There is only 1 key, reversal is true and comparison is lexicographic. The lexicographic order is 12, 122, 13.
Therefore, the output is the reverse of this which is 13, 122, 12.

Sample Input 2

3
92 022
82 12
77 13
2 false numeric
Sample Output 2

82 12
77 13
92 022
Explanation 2

The key for ordering is 2, reversal is false and ordering is numeric. Therefore, the keys 022, 12 and 13 should be ordered as
12, 13 and 022. Therefore, the final output is 82 12, 77 13 and 92 022.*/

#include <bits/stdc++.h>
using namespace std;

bool comp1(pair<int, vector<int>> p1, pair<int, vector<int>> p2)
{
    return p1.first < p2.first;
}
bool comp2(pair<int, vector<int>> p1, pair<int, vector<int>> p2)
{
    return p1.first > p2.first;
}
bool comp3(pair<string, vector<string>> p1, pair<string, vector<string>> p2)
{
    return p1.first < p2.first;
}
bool comp4(pair<string, vector<string>> p1, pair<string, vector<string>> p2)
{
    return p1.first > p2.first;
}

int main()
{
    int n;
    cin >> n;
    cin.get();
    vector<string> list;
    for (int i = 0; i <= n; i++)
    {
        string s;
        getline(cin, s);
        list.push_back(s);
    }
    int key;
    string reversal;
    string comparison;
    cin >> key >> reversal >> comparison;
    vector<vector<string>> vs;
    vector<vector<int>> vi;

    if (comparison == "numeric")
    {

        for (string token : list)
        {
            stringstream ss(token);
            vector<int> r;
            while (getline(ss, token, ' '))
            {
                int t = stoi(token);
                r.push_back(t);
            }
            vi.push_back(r);
        }
    }
    else
    {
        for (string token : list)
        {
            stringstream ss(token);
            vector<string> r;
            while (getline(ss, token, ' '))
            {
                r.push_back(token);
            }
            vs.push_back(r);
        }
    }
    if (comparison == "numeric")
    {
        vector<pair<int, vector<int>>> vp;
        for (int i = 0; i < vi.size(); i++)
        {
            vp.push_back(make_pair(vi[i][key - 1], vi[i]));
        }
        if (reversal=="false")
        {
            sort(vp.begin(), vp.end(), comp1);
        }
        else
        {
            sort(vp.begin(), vp.end(), comp2);
        }

        for (int i = 0; i < vp.size(); i++)
        {
            for (auto x : vp[i].second)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    else
    {
        vector<pair<string, vector<string>>> vp;
        for (int i = 0; i < vi.size(); i++)
        {
            vp.push_back(make_pair(vs[i][key - 1], vs[i]));
        }
        if (reversal=="false")
        {
            sort(vp.begin(), vp.end(), comp3);
        }
        else
        {
            sort(vp.begin(), vp.end(), comp4);
        }
        for (int i = 0; i < vp.size(); i++)
        {
            for (auto x : vp[i].second)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}