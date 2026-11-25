/// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define tr(x) transform((x).begin(), (x).end(), (x).begin(), ::toupper)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

const int mx = 1e7+123;
const ll M = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

const ll N = 1e7;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string s, a;
int n, m;
int dp[5005][5005];

int LCS(int i, int j){
    if(i==n || j==m) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(a[i] == s[j]) return dp[i][j] = 1+LCS(i+1, j+1);
    return dp[i][j] = max(LCS(i+1, j),LCS(i, j+1));
}
void Raynox() {
    cin >> s >> a;
    n = a.size();
    m=s.size();
    memset(dp, -1, sizeof(dp));
    cout << LCS(0, 0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
    Raynox();
    }
    return 0;
}

// coding with sakib
