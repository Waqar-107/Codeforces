#include<bits/stdc++.h>
using namespace std;
int main()
{
        int d[3];
        int i,s;

        for(i=0;i<3;i++)
            cin>>d[i];

        sort(d,d+3);

        s=d[2]-d[0];

        cout<<s;

        return 0;
}
