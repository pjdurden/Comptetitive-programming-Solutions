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
#define vi vector<int>
#define pi pair<int,int>
#define pb push_back
#define umap unordered_map
#define uset unordered_set
#define vvi vector<vector<int>>
ll powmod(ll x,ll y){ll t; for(t=1;y;y>>=1,x=x*x%mod) if(y&1) t=t*x%mod; return t;}
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
ll lcm(ll x,ll y){return x*(y/gcd(x,y)); }
void smask(int pos,int &i){ i=i^(1<<pos); }
void clmask(int pos,int &i){ i=i&~(1<<pos); }
bool chmask(int pos,int i){return i&(1<<pos);}
double cordist(pair<double,double> a,pair<double,double> b)
{return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));}
 
 
 
//ll dp[60];
//int posx[10];
//int posy[10];
//im,q,r;nt price[30]; 
//int dx[]={-1,0,1,0};
//int dy[]={0,1,0,-1};
//char board[26][26];
ll n,m,q,r;

void solve()
{
    cin>>n>>m>>q;
    string s;
    cin>>s;
    ll arr[s.length()];
    memset(arr,0,sizeof arr);
    int j=0;
    for(int i=s.length()-2;i>=0;i--)
    {
        if(i==s.length()-2)
        {
            if(s[i]=='A')
                arr[i]=n;
            else arr[i]=m;
        }
        else
        {
            if(s[i]==s[i+1])
            {
                arr[i]=arr[i+1];
            }
            else
            {
                if(s[i]=='A')
                    arr[i]=n+arr[i+1];
                else arr[i]=m+arr[i+1];       
            }
        }
    }
    int res=-1;
    for(int i=0;i<s.length();i++)
    {
        if(arr[i]<=q)
        {
            res=i;
            break;
        }
    }
    if(res==-1)
        cout<<s.length()<<endl;
    else cout<<res+1<<endl;
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
    
    //int counter=1;
    while(k--)
    {
        //printf("Case %d: ",counter++);
        solve();
    }
    return 0;
}