https://www.hackerrank.com/challenges/simple-array-sum/submissions

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar [i];
        sum+=ar[i];
    }
    cout<<sum<<endl;
    return 0;
}
