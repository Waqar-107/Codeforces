#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
        int i,j,k;
        int n,m;
        char ci[300];

        cin>>ci;

        for(i=0;i<strlen(ci);)
        {
                if(ci[i]=='.')
                    {
                        cout<<"0";
                        i++;
                    }
                else if(ci[i]=='-' && ci[i+1]=='-')
                {
                    cout<<"2";
                    i+=2;
                }
                else if(ci[i]=='-' && ci[i+1]=='.')
                {
                    cout<<"1";
                    i+=2;
                }
        }

        return 0;
}
