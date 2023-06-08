#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
string text,pat;
cin>>text>>pat;
int x=text.size();
int y=pat.size();
for(int i=0;i<x-y;i++){
    int j;
    for(j=0;j<y;j++){
        if(text[i+j]!=pat[j]){
            break;
        } 
    }
    if(j==y){
        cout<<"pattern found in at index"<<" "<<i<<endl;
    }
}
get_out;
}