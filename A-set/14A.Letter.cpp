#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
        int i,j,k;
        int n,m;
        int fr=-1,sr=100000;
        int sc=100000,fc=-1;

        cin>>n>>m;
        char s[n][m];

        for(i=0;i<n;i++)
        {
            scanf("%s",&s[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                    if(s[i][j]=='*')
                    {
                        //first star
                        if(j<=sc && i<=sr)
                        {
                            sc=j;
                            sr=i;
                        }
                        else if(j<=sc && i>=sr)
                        {
                            sc=j;
                        }
                        else if(j>=sc && i<=sr)
                        {
                            sr=i;
                        }

                        //last star
                        if(i>=fr && j>=fc)
                        {
                            fr=i;
                            fc=j;
                        }

                        else if(i<=fr && j>=fc)
                        {
                            fc=j;
                        }

                        else if(i>=fr && j<=fc)
                        {
                            fr=i;
                        }
                    }

            }
        }
//cout<<sr<<" "<<sc<<" "<<fr<<" "<<fc<<endl;
        for(i=sr;i<=fr;i++)
        {
            for(j=sc;j<=fc;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }

        return 0;
}
