
#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char A, char B, char C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << "Move from " << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int n = 3;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    TOH(n, a, b, c);
    return 0;
}
