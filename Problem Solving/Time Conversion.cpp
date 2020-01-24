#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     
     */
     string sn="";
     int h1=s[1]-'0';
     int h2=s[0]-'0';
     int hh=(h2*10)+h1;
     if(s[8]=='A')
     {
         if(hh==12)
         {
        
            sn+="00";
            for(int i = 2; i < 8; i++)
                sn+=s[i];

         }
         else
        {
           for(int i = 0; i < 8; i++)
                sn+=s[i];
        }
}
     else 
     {
         if(s[8]=='P')
         {
             if(hh==12)
             {
                sn+="12";
                for(int i = 2;i<8;i++)
                    sn+=s[i];
             }
             else {
                 hh=hh+12;
                 char ch=int(hh/10)+'0';
                 sn+=ch;
                ch=int(hh%10)+'0';
                sn+=ch;
                 for(int i=2;i<8;i++)
                    sn+=s[i];
             } 


         }





     }

return sn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
