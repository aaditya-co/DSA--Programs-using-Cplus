#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter Element Size : ";
    cin>>n;
    int a[10];
    int cusm[10];
    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //kadene's Algo to find MaxSum array.

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(currsum, maxsum);
    }
    cout << maxsum;
}