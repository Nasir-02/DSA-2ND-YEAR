https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    float p=0,n=0,z=0;
    cin>>l;
    vector<int>arr(l);
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    for(int i=0;i<l;i++){
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            n++;
        }
        else{
            z++;
        }
    }
    printf("%0.5f",p/arr.size());
    cout<<endl;
    printf("%0.5f",n/arr.size());
    cout<<endl;
    printf("%0.5f",z/arr.size());
    return 0;
}
