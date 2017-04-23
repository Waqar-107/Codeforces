#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        bool f1=true;
        map<char,int> mp;
        string s1,s2;

        getline(cin,s1);
        getline(cin,s2);

        for(i=0;i<s1.length();i++)
        {
            mp[s1[i]]++;
        }

        for(i=0;i<s2.length();i++)
        {
            if(mp[s2[i]]>0 || s2[i]==' ')
            {
                mp[s2[i]]--;
                continue;
            }

            else
            {
                f1=false;
                break;
            }
        }

        if(f1==true)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
