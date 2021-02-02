#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int findPrime(int x){
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                x++;
                x=findPrime(x);
                return x;
            }
        }
        //cout<<x<<" ";
        return x;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int d;
    cin>>d;
    int first,second;
    first =findPrime(d+1);
    second =findPrime(first+d);
    //cout<<first<<" "<<second<<"\n";
    cout<<first*second<<"\n";
}
return 0;
}