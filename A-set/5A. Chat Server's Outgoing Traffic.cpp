#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s;
        int p=0,l=0,x,i;
        char ch;

        while(scanf("%c",&ch)!=EOF)
        {
            getline(cin,s);
            if(ch=='+')
                p++;
            else if(ch=='-')
                p--;
            else
            {
                for(i=0;i<=s.length();i++)
                {
                    if(s[i]==':')
                    {
                        break;
                    }
                }

                l+=((s.length()-i-1)*p);
            }
        }

        cout<<l;

        return 0;

}
