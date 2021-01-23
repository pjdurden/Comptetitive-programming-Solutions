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
ll dp[1000000];

ll fibb(ll i)
{
    if(i==0)return n;
    if(i==1)return m;
    if(dp[i]!=-1)return dp[i];
    return dp[i]=(fibb(i-1)+fibb(i-2))%r;
}

ll pisano(ll m) {
    vector<long> v{1, 1};
    while (true) {
        auto t = (v[v.size() - 1] + v[v.size() - 2]) % m;
        v.push_back(t);
        if (t == 0 && v.size() % 2 == 0 &&
            equal(v.begin(), v.begin() + v.size() / 2,
                       v.begin() + v.size() / 2, v.end())) {
            return v.size() / 2;
        }
    }
    return v.size() / 2;
}

void solve()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>m>>q>>r;
    r=powmod(10,r);
    ll pis=pisano(r);
    cout<<fibb(q%pis)<<endl;
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
