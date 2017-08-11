/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;
    string s,t;

    cin>>n>>s;

    int cnt[26];
    memset(cnt,0,sizeof(cnt));

    for(i=0;i<s.length();i++)
        cnt[s[i]-'a']++;

    for(i=0;i<26;i++)
    {
        if(!cnt[i])
            continue;
        else
        {
            if(cnt[i]%n==0)
            {
                k=cnt[i]/n;
                while(k--)
                    t.push_back(i+'a');
            }

            else
            {
                cout<<"-1";
                return 0;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<t;

    return 0;
}
