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
ll n,m,q,r;
vpi pfact(ll x)
{
    vpi fact;
    int count=0;
    for(int i=2;i*i<=x and x!=1;i++)
    {
        if(x%i==0)
        {
            count=0;
            while(x%i==0)
            {
                x/=i;
                count++;
            }
            fact.pb({i,count});
        }
    }
    if(x>1)
    {
        fact.pb({x,1});
    }
    return fact;
}


void solve()
{
    cin>>n>>m;
    vpi tempn=pfact(n);
    vpi tempm=pfact(m);
    umap <int,int> mpm;
    umap<int,int> mpn;
    for(int i=0;i<tempn.size();i++)
        mpn[tempn[i].first]=tempn[i].second;
    for(int i=0;i<tempm.size();i++)
        mpm[tempm[i].first]=tempm[i].second;
    ll res=1;
    bool flag=true;
    for(auto j:mpn)
    {
        //cout<<j.first<<" "<<j.second<<endl;
        if(mpm.count(j.first)==0 or mpm[j.first]<j.second){
            flag=false;
            break;
        }
        if(j.second==mpm[j.first])mpm[j.first]-=j.second;
    }
    if(!flag)
    {
        cout<<"NO SOLUTION\n";
        return;
    }
    for(auto j:mpm)
    {
        if(j.second>0)res*=powmod(j.first,j.second);
    }
    if( lcm(n,res)==m )cout<<res<<endl;
    else cout<<m<<endl;
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
