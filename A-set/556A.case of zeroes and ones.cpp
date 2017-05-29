#include<iostream>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
        int i,j,k;
        int n;
        int z=0,o=0;

        cin>>n;
        char s[n];
        cin>>s;

       for(i=0;i<strlen(s);i++)
        {
                if(s[i]=='0')
                    z++;
                else
                    o++;
        }

        cout<<abs(o-z)<<endl;

        return 0;
}
