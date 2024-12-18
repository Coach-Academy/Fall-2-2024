#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define r_all(v)  v.rbegin(),v.rend()
#define fsp(n) fixed<<setprecision(n)
#define sz(s) s.size()
const ld Pi = acos(-1);
const int MOD = 10e9 + 7, N = 105;


int main()
{
    int n, k; cin>>n>>k;
    int ans = 0;
    while(n--){
        string s; cin>>s;
        bool freq[15]{0};
        for(int i = 0 ; i < sz(s) ; i++){
            freq[s[i]-'0'] = 1;
        }
        bool ok = 1;
        for(int i = 0 ; i <= k ; i++){
            if(freq[i]==0){
                ok = 0;
                break;
            }
        }
        if(ok) ans++;
    }
    cout<<ans;
    return 0;
}