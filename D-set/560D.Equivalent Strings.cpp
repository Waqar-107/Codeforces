/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

string s1,s2;
bool equ(string a,string b)
{
    if (a==b)
        return true;

    int la= a.size(),lb= b.size();

    if (la&1 || lb&1)
        return false;

    if (la==1)
        return false;

    string as1 = a.substr(0,la/2),as2 = a.substr(la/2,la/2);
    string bs1 = b.substr(0,lb/2),bs2 = b.substr(lb/2,lb/2);

    return (equ(as1,bs2) && equ(as2,bs1)) || (equ(as1,bs1) && equ(as2,bs2));
}

int main()
{
    cin>>s1;
    cin>>s2;

    if(equ(s1,s2))
        puts("YES");
    else
        puts("NO");

    return 0;
}
