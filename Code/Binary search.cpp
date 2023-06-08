#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
   ll n,x;
   cin>>n>>x;
   ll a[n];
   
   for(ll i=0;i<n;i++)
   {
    cin>>a[i];
   }
   bool ok=false;
   sort(a,a+n);
   ll left=0;
   ll right=n-1;
   ll mid;
while(left<=right)
{
mid=left+(right-left)/2;
if(a[mid]==x){
   ok=true;
   break;
}
else if(a[mid]<x){
    left=mid+1;
}
else{
    right=mid-1;
}

}
if(ok==true)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
get_out;
}