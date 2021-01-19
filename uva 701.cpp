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
vpi dp;

bool digits(ll a,ll b)
{
    if(a<=b)return false;
    vi ar;
    vi br;
    while(a!=0)
    {
        ar.pb(a%10);
        a/=10;
    }
    while(b!=0)
    {
        br.pb(b%10);
        b/=10;
    }
    int i=ar.size()-1;
    int j=br.size()-1;
    while(i>=0 and j>=0)
    {
        if(ar[i--]!=br[j--])return false;
    }
    if( (i+1) <= br.size() )return false;
    return true;
}

void solve()
{
    char s[20];
    double a,left,right;int len;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s)+1;
        a=atof(s);
        while(1)
        {
            left=log(a)/log(2)+len*log(10)/log(2);
            right=log(a+1)/log(2)+len*log(10)/log(2);
            if((int)left<(int)right)
            break;
            len++;
        }
        int ans=ceil(left);
        printf("%d\n",ans);
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
