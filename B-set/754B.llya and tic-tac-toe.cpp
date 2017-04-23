/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000007
#define dbg cout<<"tttt"<<endl;
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n=5;
        char s[n][n],llya,ch;
        ll x=0,o=0;

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                cin>>s[i][j];

                if(s[i][j]=='x')
                    x++;
                else if(s[i][j]=='o')
                    o++;
            }
        }


        //llya er sign konta?
        if(x>o)
        {
            llya='o';
            ch='x';
        }

        else
        {
            llya='x';
            ch='o';
        }

        n--;
        bool f=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[i][j]==llya)
                {
                            //dan e er pashe 2ta
                            if(s[i][j+1]==llya && s[i][j+2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //dan er 2tar moddhe 1ta dot, 1ta onnota
                            else if(s[i][j+1]=='.' && s[i][j+2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //bam er 2ta
                            else if(s[i][j-1]==llya && s[i][j-2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //bam er 2tar moddhe 1ta dot, 1ta onnota
                            else if(s[i][j-1]=='.' && s[i][j-2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //upor-nich
                            else if(s[i+1][j]==llya && s[i+2][j]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }


                            else if(s[i+1][j]=='.' && s[i+2][j]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i-1][j]==llya && s[i-2][j]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i-1][j]=='.' && s[i-2][j]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i][j-1]==llya && s[i][j-2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i][j-1]=='.' && s[i][j-2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //right-down
                            else if(s[i+1][j+1]==llya && s[i+2][j+2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i+1][j+1]=='.' && s[i+2][j+2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //left down
                            else if(s[i+1][j-1]==llya && s[i+2][j-2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i+1][j-1]=='.' && s[i+2][j-2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //right-up
                            else if(s[i-1][j+1]==llya && s[i-2][j+2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i-1][j+1]=='.' && s[i-2][j+2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }

                            //left up
                            else if(s[i-1][j-1]==llya && s[i-2][j-2]=='.')
                            {
                                cout<<"YES";
                                return 0;
                            }

                            else if(s[i-1][j-1]=='.' && s[i-2][j-2]==llya)
                            {
                                cout<<"YES";
                                return 0;
                            }
                }

                else if(s[i][j]=='.')
                {
                    //pashapashi
                    if(s[i][j+1]==llya && s[i][j-1]==llya)
                    {
                        cout<<"YES";
                        return 0;
                    }

                    //upor nich
                    else if(s[i+1][j]==llya && s[i-1][j]==llya)
                    {
                        cout<<"YES";
                        return 0;
                    }

                    //dan diag
                    else if(s[i-1][j+1]==llya && s[i+1][j-1]==llya)
                    {
                        cout<<"YES ";
                        return 0;
                    }

                    //bam diag
                    else if(s[i-1][j-1]==llya && s[i+1][j+1]==llya)
                    {
                        cout<<"YES";
                        return 0;
                    }
                }

            }
        }

        cout<<"NO";
        return 0;
}
