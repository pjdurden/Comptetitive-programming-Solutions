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

void solve()
{
    int n[]={6,35,204,1189,6930,40391,235416,1372105,7997214,46611179};
    int m[]={8,49,288,1681,9800,57121,332928,1940449,11309768,65918161};
    for(int i=0;i<10;i++)
    {
        cout << setw(10) << n[i] << setw(10) << m[i] << endl;
    }

    /*
    ll i=6;
    int count=0;
    while(count<10)
    {
        ll sum=(i*(i-1));
        if(sum%2==0)
            sum/=2;
        else {i++;continue;}
        ll b = ((2*(i+1))-1) * ((2*(i+1))-1);
        b+= (8*sum);
        
        if(b<0)
            {i++;continue;}
        ll temp=sqrt(b);
        if((temp*temp)!=b){i++;continue;}
        //cout<<temp;
        b=temp;b-=((2*(i+1))-1);
        if(b<=0 or b%2!=0)
            {i++;continue;}
        b/=2;
        cout<<i<<" "<<i+b<<endl;
        i++;
        count++;
    }
    */
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
