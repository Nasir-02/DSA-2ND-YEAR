https://www.hackerrank.com/challenges/compare-the-triplets/submissions/code/296717031

#include <bits/stdc++.h>
using namespace std;
int main(){
     int a[3];
     int b [3];
     for (int i=0; i<3; i++){
        cin>>a[i];
     } 
     for (int i=0; i<3; i++){
         cin>>b[i];
         } 
         int c1=0,c2=0;
         for (int i=0; i<3; i++){
            if (a[i]>b[i])
            c1++;
            if(b[i]>a[i])
            c2++; 
        }
        cout<<c1<<" "<<c2;
        
        return 0;
 }  
