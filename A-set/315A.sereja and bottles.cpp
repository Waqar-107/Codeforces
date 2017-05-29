#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,count=0;
        int a,b,i;
        map<int,int> bt;

        cin>>n;
        pair<int,int> trc[n];
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            bt[a]++;
            trc[i]=make_pair(b,a);
        }


        i=0;
        while(i<n)
        {
            if(trc[i].second!=trc[i].first && bt[trc[i].first]>0)
            {
                count++;
            }

            i++;
        }

        cout<<n-count;
        return 0;
}
