/***from dust i have come, dust i will be***/

#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1010
#define inf 10000000
#define pp pair<int,int>

using namespace std;

int a[]={0,1,2,3};
int n,m;
pp st,en;
string s[55],t;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;

    scanf("%d%d",&n,&m);

    for(i=0;i<n;i++)
        cin>>s[i];

    cin>>t;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='S')
                st={i,j};

            if(s[i][j]=='E')
                en={i,j};
        }
    }

    int cnt=0;

    int r,c;j=0;
    do{
        r=st.first,c=st.second;

        k=t.length();j++;
        for(i=0;i<k;i++)
        {
            if(t[i]==a[0]+48)
                r--;
            else if(t[i]==a[1]+48)
                r++;
            else if(t[i]==a[2]+48)
                c--;
            else
                c++;

            if(r<0 || r>=n || c<0 || c>=m)
            {
                break;
            }

            if(s[r][c]=='#')
            {
                break;
            }

            if(s[r][c]=='E')
            {
                cnt++;break;
            }
        }
    }while(next_permutation(a,a+4));

    printf("%d",cnt);

    return 0;
}
