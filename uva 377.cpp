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


int str(string a)
{
    int num=0;
    for(int i=0;i<a.length();i++)
    {
        num*=4;
        if(a[i]=='U')num++;
        else if(a[i]=='C')num+=2;
        else if(a[i]=='D')num+=3;
    }
    return num;
}

void solve()
{
    string a,b,c;
    cin>>a>>b;
    char op[3];
    for(int i=0;i<3;i++)cin>>op[i];
    cin>>c;
    int num1=str(a);    
    int num2=str(b);
    for(int i=0;i<3;i++)
    {
        if(op[i]=='A')
            num2+=num1;
        else if(op[i]=='R')
            num2=num2>>2;
        else num2=num2<<2;
    }
    int cs=str(c);
    if(cs==num2)cout<<"YES";
    else cout<<"NO";
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
    printf("COWCULATIONS OUTPUT\n");
    while(k--)
    {
        //printf("Case %d: ",counter++);
        solve();
        cout<<endl;
    }
    printf("END OF OUTPUT\n");
    return 0;
}
