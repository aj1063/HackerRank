#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    map<string, int> dict;
    while(n--)
    {
        string s;
        cin>>s;
        int tele;
        cin>>tele;
         dict.insert(pair<string, int>(s, tele));
    }
    string sn;
    
    //int j;
    //for(j = 0; j < n; j++)
    //{
        
    //}
while(cin>>sn)
{
   int tele; 
   
    if(dict.find(sn)!=dict.end())
    {   
        cout<<sn<<"="<<dict[sn]<<endl;
    //cout<<"found"<<endl;
    }
    else 
        cout<<"Not found"<<endl;
    
}


    return 0;
}
