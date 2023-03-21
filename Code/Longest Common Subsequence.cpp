#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  ll n=s1.size();
  ll m=s2.size();
  int a[n+1][m+1];
  for(ll i=0;i<=n;i++){
  	for(ll j=0;j<=m;j++){
  		a[i][j]=-1;
  	}
  }
  for(ll i=0;i<n;i++){
  	a[i][0]=0;
  }
  for(ll j=0;j<m;j++){
  	a[0][j]=0;
  }
  for(ll i=1;i<=n;i++){
  	for(ll j=1;j<=m;j++){
  		if(s1[i-1]==s2[j-1])
{
	a[i][j]=a[i-1][j-1]+1;
}
else{
	a[i][j]=max(a[i-1][j],a[i][j-1]);
}
  	}
  }
  cout<<a[n][m]<<endl;

  

get_out;
}