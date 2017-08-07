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
    int n,m;
    string s;

    cin>>n>>s;

    int a[n];
    memset(a,0,sizeof(a));

    j=s.length()-1;
    for(i=0; i<s.length()/2; i++)
    {
        if(s[i]!='?' && s[j]=='?')
            s[j]=s[i];

        else if(s[i]=='?' && s[j]!='?')
            s[i]=s[j];

        j--;
    }

    for(i=0; i<s.length(); i++)
        a[s[i]-'a']++;

    //fill the single one, that is in the middle and only applicable if length is odd
    if(s.length()%2==1 && s[s.length()/2]=='?')
    {
        //use the letter that has not been used
        //if all of them are used then use 'a'
        k=-1;
        for(j=n-1; j>=0; j--)
        {
            if(a[j]==0)
            {
                k=j;
                break;
            }
        }

        if(k==-1)
            k='a';

        else
            a[k]++,k+='a';

        s[s.length()/2]=char(k);
    }

    //fill those which are both '?'
    j=s.length()/2;
    if(s.length()%2==1)
        j++;

    for(i=(s.length()/2)-1; i>=0; i--)
    {
        if(s[i]==s[j] && s[i]=='?')
        {
            //use the letter that has not been used
            //if all are used, then use 'a'
            k=-1;
            for(int l=n-1; l>=0; l--)
            {
                if(a[l]==0)
                {
                    k=l;
                    break;
                }
            }

            if(k==-1)
                a[0]++,k='a';

            else
                a[k]+=2,k+='a';

            s[i]=char(k);
            s[j]=char(k);
        }

        j++;
    }

    //check if any of the first k letter is unused
    for(i=0; i<n; i++)
    {
        if(!a[i])
        {
            cout<<"IMPOSSIBLE";
            return 0;
        }
    }

    //check palindrome
    j=s.length()-1;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]!=s[j])
        {
            cout<<"IMPOSSIBLE";
            return 0;
        }

        j--;
    }

    cout<<s;

    return 0;
}
