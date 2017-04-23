#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,m;
        char alph[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        cin>>n>>m;

        char x,y,s[n+1];

        scanf("%s",&s);

        //taking input and simultaneously changing the alph[]
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            for(j=0;j<26;j++)
            {
                if(alph[j]==x)
                {
                    alph[j]=y;
                }

                else if(alph[j]==y)
                {
                    alph[j]=x;
                }
            }
            //cout<<alph<<endl;
        }

        //the nth letter will be used with the help of ASCII to replace with the desirable letter
        for(i=0;i<n;i++)
        {
                //cout<<s[i]<<" ";
                s[i]=alph[s[i]-97];
                //cout<<s[i]<<endl;
        }

        cout<<s;

        return 0;
}
