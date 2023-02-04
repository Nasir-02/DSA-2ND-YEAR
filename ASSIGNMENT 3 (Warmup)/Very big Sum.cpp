
https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int a[l];
    long sum=0;
    for (int i=0;i<l;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<l;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
}
