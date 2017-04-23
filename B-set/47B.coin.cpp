#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        string  gv[3];
        int i,j,k;
        char ans[4];
        map<string,int> mp;

        for(i=0;i<3;i++)
        {
            cin>>gv[i];
            mp[gv[i]]++;
        }

        //fill up 1st slot
        if((mp["A<B"]==1 || mp["B>A"]==1) && (mp["A<C"]==1 || mp["C>A"]==1))
            ans[0]='A';
        else if((mp["C<B"]==1 || mp["B>C"]==1) && (mp["C<A"]==1 || mp["A>C"]==1))
            ans[0]='C';
        else
            ans[0]='B';

        //fill up the 3rd slot
        if((mp["A>B"]==1 || mp["B<A"]==1) && (mp["A>C"]==1 || mp["C<A"]==1))
            ans[2]='A';
        else if((mp["C>B"]==1 || mp["B<C"]==1) && (mp["C>A"]==1 || mp["A<C"]==1))
            ans[2]='C';
        else
            ans[2]='B';

        //finally the 2nd one
        if((ans[0]=='A' && ans[2]=='B') || (ans[0]=='B' && ans[2]=='A'))
            ans[1]='C';
        else if((ans[0]=='A' && ans[2]=='C') || (ans[0]=='C' && ans[2]=='A'))
            ans[1]='B';
        else
            ans[1]='A';

        if(ans[0]!=ans[1] && ans[0]!=ans[2] && ans[1]!=ans[2])
            cout<<ans[0]<<ans[1]<<ans[2]<<endl;
        else
            cout<<"Impossible"<<endl;

        return 0;
}
