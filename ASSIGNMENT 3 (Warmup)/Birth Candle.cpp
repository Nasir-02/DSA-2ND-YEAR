#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,max=0;
    cin>>l;
    int a[l];
    for (int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<l;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int count=0;
    for (int i=0;i<l;i++)
    {
        if (a[i]==max)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

https://www.hackerrank.com/challenges/birthday-cake-candles/submissions
