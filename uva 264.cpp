/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/

#include <bits/stdc++.h>
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
void smask(int pos,int &i){ i=i^(1<<pos); }
void clmask(int pos,int &i){ i=i&~(1<<pos); }
bool chmask(int pos,int i){return i&(1<<pos);}
double cordist(pair<double,double> a,pair<double,double> b)
{return sqrt(((a.first-b.first)*(a.first-b.first))+((a.second-b.second)*(a.second-b.second)));}



//ll dp[60];
//int posx[10];
//int posy[10];
//int price[30];
//int dx[]={-1,0,1,0};
//int dy[]={0,1,0,-1};
//char board[26][26];
ll n,m,q;
pi dp[10000005];

void init()
{
    dp[1]={1,1};
    int j=2;
    int x,y,t=3;
    while(j<10000005)
    {
        if(t%2==0){x=1;y=t-1;}
        else {x=t-1;y=1;}
        for(int k=1;k<t;k++)
        {
            if(j>=10000005)break;
            dp[j++]={x,y};
            if(t%2==0){x++;y--;}
            else {x--;y++;}
        }
        t++;
    }
}

void solve()
{
    while(cin>>n)
    {
        int x=dp[n].second , y=dp[n].first , tmp = n;
        //cout<<x<<" "<<y<<endl;
        printf("TERM %d IS %d/%d\n",tmp,x,y);
    }
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
    //cin>>k;
    //int counter=1;
    init();
    while(k--)
    {
        //printf("Case %d: ",counter++);
        solve();
    }
    return 0;
}
