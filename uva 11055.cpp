/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/

#include <bits/stdc++.h>
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


string inven(string a)
{
    string res="";
    int arr[10];
    memset(arr,0,sizeof arr);
    for(int i=0;i<a.length();i++)
    {
        arr[a[i]-'0']++;
    }
    ostringstream str1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]!=0)
        {
            str1<<arr[i];
            //cout<<str1.str()<<" "<<i<<endl;
            res+=str1.str();
            res+=(i+'0');
            str1.str("");
            str1.clear();
        }
    }
    return res;
}

void solve()
{
    while(cin>>n and n!=0)
    {
        bool flag=true;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[i][j]+arr[i+1][j+1]!=arr[i+1][j]+arr[i][j+1])
                    flag=false;
            }
        }
        if(flag)printf("homogeneous\n");
        else printf("not homogeneous\n");

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
