https://www.hackerrank.com/challenges/diagonal-difference/submissions

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,s1=0,s2=0,sum;
    cin>>l;
    int a[l][l];
    for (int i=0;i<l;i++)
    {
        for (int j=0;j<l;j++)
        {
        cin>>a[i][j];
    }
    }
    for (int i=0;i<l;i++)
    {
        for (int j=0;j<l;j++)
        {
            if (i==j)
            {
                s1=a[i][j]+s1;
            }
        }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
           if(i+j==l-1) s2+=a[i][j];
    }
    }
    sum=abs(s2-s1);
    cout<<sum;

return 0;
}
