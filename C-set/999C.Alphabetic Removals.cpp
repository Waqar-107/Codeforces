/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s,t;

    sff(n,k);
    cin>>s;

    map<char,int> lc;
    for(i=0;i<n;i++)
        lc[s[i]]++;

    map<char,bool> mp;

    for(i='a';i<='z';i++)
    {
        if(lc[i]==k)
        {
            mp[i]=1;
            break;
        }

        else if(lc[i]<k)
        {
            mp[i]=1;
            k-=lc[i];
        }

        else
        {
            //shb i kata jabe na, first kta kete break koro
            j=0;
            while(j<n && k)
            {
                if(s[j]==i)
                    s[j]='#', k--;

                j++;
            }

            break;
        }
    }

    for(i=0;i<n;i++)
    {
        //cout<<s[i]<<" "<<mp[s[i]];
        if(mp[s[i]])
            s[i]='#';
    }

    for(i=0;i<n;i++)
    {
        if(s[i]!='#')
            cout<<s[i];
    }

    cout<<endl;

    return 0;
}
