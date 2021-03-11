/*
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
*/
 
#include <bits/stdc++.h>
#include<stdlib.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod=1e9+7;
#define eps 1e-7
#define vpi vector<pair<int,int>>
#define vi vector<ll>
#define pi pair<int,int>
#define pb push_back
#define ppb pop_back
#define umap unordered_map
#define uset unordered_set
#define vvi vector<vector<int>>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll powmod(ll x,ll y){ll t; for(t=1;y;y>>=1,x=x*x%mod) if(y&1) t=t*x%mod; return t;}
ull gcd(ull x,ull y){return y?gcd(y,x%y):x;}
ll lcm(ull x,ull y){return x*(y/gcd(x,y)); }
void smask(int pos,int &i){ i=i^(1<<pos); }
void clmask(int pos,int &i){ i=i&~(1<<pos); }
bool chmask(int pos,int i){return i&(1<<pos);}
double cordist(pair<double,double> a,pair<double,double> b)
{return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));}
 
 
 
//ll prime[60];
//int posx[10];
//int posy[10];
//im,q,r;nt price[30]; 
//char board[26][26];
ll n,m,q,r;
ll arr[9];
ll dp[1000006][9];
pi path[1000006];

ll sol(int mon,int ind)
{
	//cout<<mon<<arr[ind]<<endl;
	if(mon<0)
		return INT_MIN;
	if(mon==0 or ind==-1)
		return 0;
	if(dp[mon][ind]!=-1)
		return dp[mon][ind];
	ll temp=INT_MIN;
	for(int i=mon/arr[ind];i>=0;i--)
	{
		//cout<<i<<endl;
		ll res=i+sol(mon-(i*arr[ind]),ind-1);
		if(res>temp)
		{
			path[mon]={i,ind};
			temp=res;
		}
	}
	return dp[mon][ind]=temp;
}

void prints(int k)
{
	if(k<=0 or path[k].first==-1 or path[k].second==-1)
		return;
	for(int i=0;i<path[k].first;i++)
		cout<<path[k].second;
	prints( k - (path[k].first*arr[path[k].second]) ) ;
	
}


void solve()    
{
	
	cin>>n;
	memset(dp,-1,sizeof dp) ;
	for(int i=0;i<9;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<1000006;i++)
	{
		path[i]={-1,-1};
	}
	ll res=sol(n,8);
	if(res==0)
	{
		cout<<"-1\n";
		return;
	}
	
	prints(n);
	cout<<endl;
	

}
 
 
 
 
int main()
{
	
	IOS	
	#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
	#endif
	int k=1;
	//cin>>k;
	//sieve();
	//int counter=1;
	while(k--)
	{
		//printf("Case %d: ",counter++);
		solve();
	}
	return 0;
}