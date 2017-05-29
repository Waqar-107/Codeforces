#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<char,int>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
bool yy(int g,int b);
using namespace std;

int main()
{
        ll al,ar;
        ll bl,br;

        cin>>al>>ar;
        cin>>bl>>br;

        //if no three finger of the boy touch each other
        //if any of two girls finger has a boys finger
        if(yy(al,br)==true || yy(ar,bl)==true)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}

bool yy(int g,int b)
{
        if(b==g)
        {
            return true;
        }

        else if(b<g )
        {
            if(b==g-1)
                return true;
            else
                return false;
        }

        else
        {
            if(2*g+2>=b)
                return true;

            else
                return false;
        }
}
