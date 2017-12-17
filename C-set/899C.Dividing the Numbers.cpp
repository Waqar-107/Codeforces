/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 21

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    scanf("%d",&n);

    deque<int> q;
    vector<int> v;

    ll x=0,y=0;

    if(n%2==0)
    {
        for(i=n; i>=1; i--)
            q.push_back(i);
    }

    else
    {
        for(i=n; i>=2; i--)
            q.push_back(i);
    }



    k=1;
    while(q.size()>0)
    {
        if(k%2)
        {
            if(q.size()>0)
            {
                v.push_back(q.front());
                x+=q.front();
                q.pop_front();
            }

            if(q.size()>0)
            {
                y+=q.front();
                q.pop_front();
            }
        }

        else
        {
            if(q.size()>0)
            {
                v.push_back(q.back());
                x+=q.back();
                q.pop_back();
            }

            if(q.size()>0)
            {
                y+=q.back();
                q.pop_back();
            }
        }

        k++;
    }

    if(n%2==1)
    {
        //cout<<x<<" "<<y<<endl;
        if(x<y)
        {
            v.push_back(1);x++;
        }

        else
            y++;
    }

    printf("%I64d\n",abs(x-y));
    printf("%d ",v.size());
    for(i=0; i<v.size(); i++)
        printf("%d ",v[i]);

    return 0;
}
