#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll len,x=1000003;
        ll sum=0;

        string s,bin;

        cin>>s;
        len=s.length();

        for(i=0;i<len;i++)
        {
            if(s[i]=='>')
                bin+="1000";

            else if(s[i]=='<')
                bin+="1001";

            else if(s[i]=='+')
                bin+="1010";

            else if(s[i]=='-')
                bin+="1011";

            else if(s[i]=='.')
                bin+="1100";

            else if(s[i]==',')
                bin+="1101";

            else if(s[i]=='[')
                bin+="1110";

            else if(s[i]==']')
                bin+="1111";
        }

        len=bin.length();
        ll a[len];
        ll prod=1;

        for(i=0;i<len;i++)
        {
            a[i]=prod;
            prod=((prod%x)*(2%x))%x;
        }

        j=len-1;
        for(i=0;i<len;i++)
        {
            if(bin[i]=='1')
                sum+=(a[j]%x);

            j--;
        }

        cout<<sum%x<<endl;

        return 0;

}

/*********************************Algorithm********************************************
1.first convert the string into binary representation.

2.take an array of size length, pow(2,something) will be written as (2%x); x=(1000007) and saved in the
 array. As it is not possible to get the pow(2,something) we shall use (a*b)%x=((a%x)*(b%x))%x
 now, the product will be updated as ((prod%x)*(2%x))%x otherwise the sum will overflow

3.calculate the sum
*************************************************************************************/
