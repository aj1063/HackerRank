#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int sum;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1; i<=10; i++)
    {
        sum=n*i;
        cout<< n;
        cout<< " x ";
        cout<< i ;
        cout<< " = ";
        cout<< sum<<endl;
        
    }

    return 0;
}
