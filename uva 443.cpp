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
vi dp;
void init()
{
    dp.resize(5852,1);
    int i2=1,i3=1,i5=1,i7=1;
    for(int j=2;j<5849;j++)
    {
        dp[j]=min( dp[i2]*2,min( dp[i3]*3,min( dp[i5]*5,dp[i7]*7 ) ) );
        if(dp[j]==(dp[i2]*2))i2++;
        if(dp[j]==(dp[i3]*3))i3++;
        if(dp[j]==(dp[i5]*5))i5++;
        if(dp[j]==(dp[i7]*7))i7++;
    }
}

void solve()
{
    while(cin>>n and n!=0)
    {
        printf("The %d", n);
        if(n%10 == 1 && n%100 != 11)
            printf("st");
        else if(n%10 == 2 && n%100 != 12)
            printf("nd");
        else if(n%10 == 3 && n%100 != 13)
            printf("rd");
        else
            printf("th");
        printf(" humble number is %d.\n", dp[n]);
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
