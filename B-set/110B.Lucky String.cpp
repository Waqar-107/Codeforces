/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<string,int>
#define N 250000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,x;
    string s;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        s.push_back('#');

    for(i='a';i<='d';i++)
    {
        for(j=i-'a';j<n;j+=4)
            s[j]=i;
    }

    cout<<s;

    return 0;
}
