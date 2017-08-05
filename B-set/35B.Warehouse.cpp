/***from dust i have come, dust i will be***/

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
    int x,y,q;
    bool f;

    cin>>n>>m>>q;

    int a[n][m];
    memset(a,0,sizeof(a));

    char t[3];
    string s[n][m],id;

    for(i=0; i<q; i++)
    {
        cin>>t;

        if(t[0]=='-')
        {
            cin>>id;

            //find id
            f=0;
            for(j=0; j<n; j++)
            {
                for(k=0; k<m; k++)
                {
                    if(s[j][k]==id)
                    {
                        cout<<j+1<<" "<<k+1<<endl;
                        a[j][k]=0;s[j][k]="empty";
                        f=1;
                        break;
                    }
                }

                if(f)
                    break;
            }

            if(!f)
                cout<<"-1 -1"<<endl;
        }

        else
        {
            cin>>x>>y>>id;
            x--;
            y--;

            if(!a[x][y])
                a[x][y]=1,s[x][y]=id;

            else
            {
                f=0;
                //first search the right
                for(j=y+1; j<m; j++)
                {
                    if(!a[x][j])
                    {
                        a[x][j]=1;
                        s[x][j]=id;
                        f=1;
                        break;
                    }
                }

                if(!f)
                {
                    //start from under
                    for(j=x+1; j<n; j++)
                    {
                        for(k=0; k<m; k++)
                        {
                            if(!a[j][k])
                            {
                                a[j][k]=1;
                                s[j][k]=id;
                                f=1;
                                break;
                            }
                        }

                        if(f)
                            break;
                    }
                }

            }

        }
    }


    return 0;
}
