

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int arr[l];
    int win=0,loss=0;
    for (int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    int min =arr[0]; 
    int max=0;   
    for (int i=0;i<l;i++)
    {
        if (arr[i]>max)
        {
        max=arr[i];
        win++;
        }
        if (min>arr[i])
        {
            min=arr[i];
            loss++;
        }
    }
    cout<<win<<" "<<loss;
}
