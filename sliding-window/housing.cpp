#include <bits/stdc++.h>
using namespace std;

void housing(vector<int> plots, int n, int k)
{
    int i = 0, j = 0;
    int current_sum = 0;

    while (j < n)
    {
        current_sum += plots[j];
        j++;
        while (current_sum > k and i < j)
        {
            current_sum -= plots[i];
            i++;
        }
        if (current_sum == k)
        {
            cout << i << "-" << j - 1 << endl;
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    cin.get();

    vector<int> plots;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        plots.push_back(x);
    }
    housing(plots, n, k);
}