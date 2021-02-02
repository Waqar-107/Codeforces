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
    int n,d,temp;
    cin>>n>>d;
    int count=0;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];  
}
    sort(arr.begin(),arr.end());
if((arr[0]+arr[1]<=d) || arr[n-1]<=d)
    cout<<"YES\n";
else 
    cout<<"NO\n";
}
return 0;
}