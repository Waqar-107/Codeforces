int main(){
    int n,k;
    cin>>n>>k;
   string s;
   std::vector<int> a;
   int c=0;
   vector<string> b;
   for(int i=0;i<k;i++){
       cin>>s;
       if(count(s.begin(),s.end(),'1')<n)c++;
       else {a.push_back(c);c=0;}
 
   }
   a.push_back(c);
   
cout<<*max_element(a.begin(),a.end());
}
