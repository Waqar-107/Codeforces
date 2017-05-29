#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{

        int i,j,k,n;
        char s[200];
        int count=0,segment=0;
        int a[100];

        cin>>n;
        scanf("%s",&s);

        k=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                count++;
            }

            else if(s[i]=='W' && count!=0)
            {
                segment++;
                a[k]=count;
                k++;
                count=0;
            }

            if(i==n-1 && s[i]=='B')
            {
                segment++;
                a[k]=count;
                break;
            }
        }


        cout<<segment<<endl;

        for(i=0;i<segment;i++)
        {
            cout<<a[i]<<" ";
        }

        return 0;
}
