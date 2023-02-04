https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m=1;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]>=38) {
        for (int j=1;j<50;j++)
        {
            m=j*5;
            if (m>a[i])
            {
                if ((m-a[i])<3) 
                {
                a[i]=m;
            }
            else {
            continue;
            } } 
            else {
            continue;
            }
            break;
            }
        m=1;
    }
    else {
    continue;
    } }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
