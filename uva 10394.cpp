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
ll n,m,q,r;
bool dp[20000004];

void sieve()
{
    memset(dp,true,sizeof dp);
    dp[0]=dp[1]=false;
    for(int i=2;i<20000004;i++)
    {
        if(dp[i])
        {
            for(int j=2*i;j<20000004;j+=i)
                dp[j]=false;
        }
    }
}
int input[100020];

void init()
{
    memset(input,-1,sizeof input);
    int count=1;
    for(int i=2;i<20000001;i++)
    {
        if(count>100000)break;
        if(dp[i] and dp[i+2])
        {
            //cout<<i<<endl;
            input[count]=i;
            count++;
        }
    }

}

void solve()
{
    sieve();
    init();
    //cout<<123<<endl;
    while( cin>>n )
    {
        printf("(%d, %d)\n",input[n],input[n]+2);
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
    while(k--)
    {
        //printf("Case %d: ",counter++);
        solve();
    }
    return 0;
}
