/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m,cnt=0;

    cin>>n>>m;
    string s[n];

    for(i=0;i<n;i++)
        cin>>s[i];

    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]>s[i+1][j])
                    break;
            }

            //violation because of jth column
            for(k=0;k<n;k++)
                s[k][j]='a';

            cnt++;
            i=-1;
        }
    }

    cout<<cnt;

    return 0;
}
