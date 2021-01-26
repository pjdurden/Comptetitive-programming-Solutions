/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/

#include <bits/stdc++.h>
#include<string>
#include<sstream>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod=1e9+7;
#define eps 1e-7
#define vpi vector<pair<int,int>>
#define vi vector<int>
#define pi pair<int,int>
#define pb push_back
#define umap unordered_map
#define uset unordered_set
#define vvi vector<vector<int>>
ll powmod(ll x,ll y){ll t; for(t=1;y;y>>=1,x=x*x%mod) if(y&1) t=t*x%mod; return t;}
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
ll lcm (ll a, ll b) {return 1ull * a * b / gcd (a, b);}
void smask(int pos,int &i){ i=i^(1<<pos); }
void clmask(int pos,int &i){ i=i&~(1<<pos); }
bool chmask(int pos,int i){return i&(1<<pos);}
double cordist(pair<double,double> a,pair<double,double> b)
{return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));}


int lcm (int a, int b) {return 1ll * a * b / gcd (a, b);}
//ll dp[60];
//int posx[10];
//int posy[10];
//int price[30]; 
//int dx[]={-1,0,1,0};
//int dy[]={0,1,0,-1};
//char board[26][26];
ull n,m,q,r;
ll dp[22];

ll fact(ll i)
{
    if(i<=2)return i;
    if(dp[i]!=-1)return dp[i];
    return dp[i]=i*fact(i-1);
}


void solve()
{
    string s;
    cin>>s;
    umap<char,int> mp;
    for(int i=0;i<s.length();i++)
        mp[s[i]]++;
    ll tot=fact(s.length());
    //cout<<tot<<endl;
    for(auto j:mp)
    {
        tot/=fact(j.second); 
    }
    cout<<tot<<endl;
}



int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int k=1;
    cin>>k;
    memset(dp,-1,sizeof dp);
    fact(20);
    int counter=1;
    while(k--)
    {
        //printf("Case %d: ",counter++);
        printf("Data set %d: ",counter++);
        solve();
    }
    return 0;
}
