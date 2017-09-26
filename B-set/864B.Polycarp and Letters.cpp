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
    int n,m;
    string t;

    cin>>n>>t;
    set<char> s;

    m=0;
    for(i=0;i<n;i++)
    {
        if(t[i]>='a' && t[i]<='z')
            s.insert(t[i]);

        else
        {
            j=s.size();
            m=max(m,j);
            s.clear();
        }
    }

    j=s.size();
    m=max(j,m);

    cout<<m;

    return 0;
}
