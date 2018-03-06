#define _CRT_SECURE_NO_WARNINGS

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
#include<sstream>
#include<string>
#include<time.h>
#include<utility>
#include<vector>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 1000000010
#define inf 1000000

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);

	int i, j, k;
	int n, m, d;
    string s,t;

    cin>>s;

    t="";
    for(i='a';i<='z';i++)
        t.push_back(i);

    k=0;n=s.length();
    for(i=0;i<n;i++)
    {
        if(k==26)
        {
            cout<<s;return 0;
        }

        if(t[k]==s[i])
            k++;

        else
        {
            if(t[k]>s[i])
                s[i]=t[k],k++;
        }
    }

    if(k==26)
        cout<<s;
    else
        cout<<"-1";

	return 0;
}
