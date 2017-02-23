#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
        int i,j,k;
        int n,x;
        char a[50],d[15],ch;
        string s;
        map<string,int>  regi;

        cin>>n;
        string info[n];

        for(i=0;i<n;i++)
            cin>>info[i];


        for(i=0;i<n;i++)
        {
                s=info[i];

                //1 means the name is taken
                if(regi[s]>=1)
                {
                        cout<<s<<regi[s]<<endl;
                        regi[s]++;
                }

                //else the name is available
                else
                {
                    cout<<"OK"<<endl;
                    regi[s]=1;
                }
        }

        return 0;
}
