/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/

//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)\

 
#include <bits/stdc++.h>
#include<time.h>
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
#define vvi vector<vector<ll>>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll powmod(ll x,ll y){ll t; for(t=1;y;y>>=1,x=x*x%mod) if(y&1) t=t*x%mod; return t;}
ull gcd(ll x,ll y){return y?gcd(y,x%y):x;}
ll lcm(ll x,ll y){return x*(y/gcd(x,y)); }
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
map<int,set<int>> mp;

void solve()    
{   
    cin>>n>>m;
    ll arr[m]={0};
    mp.clear();
    for(int i=0;i<m;i++)
        mp[0].insert(i);
    
    for(int i=0;i<n;i++)
    {
        cin>>q;
        int pos=q%m;
        if(mp.count(arr[pos])!=0)
        {
            if(mp[arr[pos]].size()==1)
                mp.erase(arr[pos]);
            else mp[arr[pos]].erase(pos);
        }
        arr[pos]++;
        mp[arr[pos]].insert(pos);
        int res=m*((*mp.begin()).first);
        //cout<<res<<" ";
        res+=(*(*mp.begin()).second.begin());
        cout<<res<<endl;
    }

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