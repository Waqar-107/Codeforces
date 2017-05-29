#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
        int i,j,k;
        int r,c;
        int r1=0,c1=0;

        cin>>r>>c;
        char s[r][c];

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>s[i][j];
            }
        }

        bool flag;
        for(i=0;i<r;i++)
        {
            flag=true;
            for(j=0;j<c;j++)
            {
                if(s[i][j]=='S')
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
                r1++;
        }

        for(i=0;i<c;i++)
        {
            flag=true;
            for(j=0;j<r;j++)
            {
                if(s[j][i]=='S')
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
                c1++;
        }
//cout<<r1<<"  "<<c1<<endl;
        int x=(r1*c) + (c1*r)  - (c1*r1);

        cout<<x;

        return 0;
}
