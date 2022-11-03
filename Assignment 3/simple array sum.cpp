
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int arr[l];
    for (int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<l;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
