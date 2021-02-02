#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a,b;
    cin>>b;
    a="1";
    for(int i=1;i<n;i++){
        if(b[i]+'1'!=b[i-1]+a[i-1])
            a+="1"; 
        else 
            a+="0";
    }
    cout<<a<<"\n";  
}
return 0;
}