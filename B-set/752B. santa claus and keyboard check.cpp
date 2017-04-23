#include<bits/stdc++.h>
using namespace std;
#define pp pair<char,char>
int main()
{
    int i,j,k;
    vector<pp> v;
    string s,t;
    map<char,char> mp;

    //initially they are assigned 1 that means everything is in right place
    for(i='a';i<='z';i++)
        mp[i]='1';

    cin>>s>>t;

    for(i=0;i<s.length();i++)
    {
        //if they are equal then the letter is in its place and you need to update it for the case, 1.ws 2.ww
        if(s[i]==t[i])
        {
            if(mp[s[i]]=='1' && mp[t[i]]=='1')
            {
                mp[s[i]]=t[i];
                mp[t[i]]=s[i];
            }

            else
            {
                if(mp[s[i]]==t[i] && mp[t[i]]==s[i])
                    continue;

                else
                {
                    cout<<"-1";
                    return 0;
                }
            }
        }

        else
        {
            //if they are replaced then update the map and make a new pair and push it in the vector
            if(mp[s[i]]=='1' && mp[t[i]]=='1')
            {
                mp[s[i]]=t[i];
                mp[t[i]]=s[i];
                v.push_back(make_pair(s[i],t[i]));
            }


            //if the map has already been manipulated then check if the elements are complementary to each other
            else
            {
                if(mp[s[i]]==t[i] && mp[t[i]]==s[i])
                    continue;

                else
                {
                    cout<<"-1";
                    return 0;
                }
            }

        }
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;

}
