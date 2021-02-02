#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int hcf(int a ,int b){
    if(a%b==0)
        return b;
    else 
        hcf(b,a%b);
}
string str_mul(string s,int n){
    string ans=s;
    for (int i=1;i<n;i++){
        ans.append(s);
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    string s1,s2,lcm;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<s1<<"\n";
    }
    else{
        int a=s1.size(),b=s2.size();
        int n=a*b/hcf(max(a,b),min(a,b));
        if(str_mul(s1,n/a)==str_mul(s2,n/b))
            cout<<str_mul(s1,n/a)<<"\n";
        else 
            cout<<"-1\n";
   }   
}
return 0;
}