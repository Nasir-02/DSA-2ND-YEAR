https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (int j = n - i -1; j < n; ++j) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
