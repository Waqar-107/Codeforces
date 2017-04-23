#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int l,sum=0;
        char s[2000];
        int v[26];

        scanf("%s",&s);
        l=strlen(s);

        cin>>k;

        for(i=0;i<26;i++)
        {
            cin>>v[i];
        }

        for(i=0;i<l;i++)
        {
            sum+=v[s[i]-97]*(i+1);
        }

        sort(v,v+26);
        int m=v[25];

        for(i=l+1;i<=l+k;i++)
        {
            sum+=(m*i);
        }

        cout<<sum;

        return 0;
}
