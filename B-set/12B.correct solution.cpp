#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
        int i,j,k;
        int n;
        int a,b;

        cin>>a>>b;

        if(a>b)
        {
            cout<<b<<" "<<(a-b)/2;
        }
        else
        {
            cout<<a<<" "<<(b-a)/2;
        }

        return 0;
}
