#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int t;
   cin>>t;
   while(t--)
   { 
    string S;
    
    // for(int i=0;i<N;i++)
        cin>>S;
    for(int i=0;i<S.size();i+=2)
        cout<<S[i];
    cout<<" ";
    for(int i=1;i<S.size();i+=2)
        cout<<S[i];
    cout<<endl;    
   }

    return 0;
}
