#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        string s;
        bool flag=true;

        cin>>s;
        for(i=0;i<s.length();)
        {
            if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            {
                i+=3;//cout<<"144"<<endl;
            }

            else if(s[i]=='1' && s[i+1]=='4')
            {
                i+=2;//cout<<"14"<<endl;
            }

            else if(s[i]=='1')
            {
                i++;//cout<<"14"<<endl;
            }

            else
            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
