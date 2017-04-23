#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{

        int i,j,k,n,l;
        int boro=0,choto=0;
        int worst,best;
        char pass[200];

        cin>>n>>k;
        char s[n][200];

        for(i=0;i<n;i++)
        {
            scanf("%s",&s[i]);
        }

        scanf("%s",&pass);
        l=strlen(pass);

         for(i=0;i<n;i++)
         {
             if(strlen(s[i])<l)
                choto++;
             else if(strlen(s[i])>l)
                boro++;
         }

         best=(choto*1)+((choto/k)*5)+1;
         worst=(n-boro-1)+ (((n-boro-1)/k)*5) +1;
//cout<<choto<<"  "<<boro<<endl;
         cout<<best<<" "<<worst;

        return 0;
}
