///////////////////          SACHIN VARDHAN              ///////////////////
 
 
#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#endif
 
//****************************************************************************************************************//
 
#include<bits/stdc++.h>
using namespace std;
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <cctype>
 
//****************************************************************************************************************//
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
 
 
const ll mod1 = 1e9+6;
const ll smax = 1e18;
const ll mod2 = 1e9+7;
const ll smin = 10e9-1;
 
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define haa cout<<"YES"<<endl;
#define naa cout<<"NO"<<endl;
#define ha cout<<"Yes"<<endl;
#define na cout<<"No"<<endl;
#define pb push_back
#define fi first
#define double long double
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define lli long long int
 
 
//****************************************************************************************************************//
void ghost(){

}
 
//****************************************************************************************************************//
 
 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string sac;
        cin>>sac;
        if(sac[0] == 'a' || sac[1] == 'b' || sac[2] == 'c'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
 
}