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
#define N 200
#define inf 1000000000
#define pp pair<char,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    string s,t;

    cin>>s;

    int cnt=0;
    for(i=s.length()-1;i>0;i--)
    {
        if(s[i]=='0')
            cnt++;
        else if(s[i]=='1')
            cnt+=2,s[i-1]++;
        else
            cnt++,s[i-1]++;
    }

    if(s[0]=='2')
        cnt++;

    cout<<cnt;

    return 0;
}
