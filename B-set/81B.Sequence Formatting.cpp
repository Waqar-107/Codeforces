/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;

    string s,t;
    getline(cin,s);

    for(i=0;i<s.length();i++)
    {
        if(s[i]==',')
        {
            t+=",";
            if(i<s.length()-1)
                t+=" ";
        }

        else if(isdigit(s[i]))
        {
            //check if it is a digit after some spaces and a digit
            if(s[i-1]==' ' && isdigit(t[t.length()-1]))
                t+=" ";

            t.push_back(s[i]);
        }

        else if(s[i]=='.')
        {
            if(i!=0 && t[t.length()-1]!=' ')
                t+=" ";

            t+="...";
            i+=2;
        }
    }

    cout<<t;

    return 0;
}
