/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

class DisjointSetUnion
{
    int n;
    int *p,*r;

public:
    DisjointSetUnion(int x)
    {
        n=x;

        p=new int[n+1];
        r=new int[n+1];

        for(int i=1;i<=n;i++)
            p[i]=i;

        memset(r,0,sizeof(r));
    }

    void Union(int x,int y)
    {
        int a=p[x];
        int b=p[y];

        if(r[a]>r[b])
        {
            p[b]=a;
            r[a]=max(r[a],r[b]+1);
        }

        else
        {
            p[a]=b;
            r[b]=max(r[b],r[a]+1);
        }
    }

    int Find(int a)
    {
        if(p[a]==a)
            return a;

        return p[a]=Find(p[a]);
    }
};

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int u,v;

    scanf("%d",&n);
    DisjointSetUnion dsu(n);

    for(i=1;i<=n;i++)
    {
        cin>>m;

        if(dsu.Find(i)!=dsu.Find(m))
            dsu.Union(i,m);
    }

    set<int> s;
    for(i=1;i<=n;i++)
        s.insert(dsu.Find(i));

    printf("%d",s.size());

    return 0;
}
