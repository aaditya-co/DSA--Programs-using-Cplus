#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "pwwkew";
    vector<int> dict(256, -1);
    int size = s.size();
    int start = -1;
    int maxLen = 0;

    for (int i = 0; i < size; i++)
    {
        if (dict[s[i]] > start)
            start = dict[s[i]];

        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout << maxLen;
} 