#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int n,max=-1;
        map<string,int> v;
        string h,m;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>h>>m;
            h=h+" "+m;
            v[h]++;
        }

        map<string,int>:: iterator p=v.begin();
        while(p!=v.end())
        {
            if(p->second >max)
            {
                max=p->second;
            }
            p++;
        }

        cout<<max;

        return 0;
}
