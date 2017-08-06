/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf INT_MAX

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,sum,m;

    cin>>n;

    char ch;
    string s[n],t,z;

    for(i=0;i<n;i++)
        cin>>s[i];

    m=inf;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            t=s[j];k=0;
            while(t!=s[i])
            {
                 if(k==s[j].length())
                {
                    cout<<"-1";
                    return 0;
                }

                ch=t.front();
                z=t;
                reverse(z.begin(),z.end());
                z.pop_back();
                reverse(z.begin(),z.end());
                z.push_back(ch);

                t=z;
                sum++;k++;
            }
        }

        m=min(m,sum);
    }

    cout<<m;

    return 0;
}
