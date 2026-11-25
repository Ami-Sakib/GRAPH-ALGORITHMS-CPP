
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

int n, m;
vector<ll>a, b;
int dp[1005][1005];
pair<int, int>nxt[1005][1005];

int LCS(int i, int j){
    if(i == n || j == m) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = 0;
    if(a[i] == b[j]){
        ans = 1 + LCS(i+1, j+1);
        nxt[i][j] = {i+1, j+1};
    }
    else{
        if(LCS(i+1, j) >= LCS(i, j+1)){
            ans = LCS(i+1, j);
            nxt[i][j] = {i+1, j};
        }
        else {
            ans = LCS(i, j+1);
            nxt[i][j] = {i, j+1};
        }
    }
    return dp[i][j] = ans;
}
vector<int>print;

void print_LCS(int i, int j){
    if(i == n || j == m) return;
    if(a[i] == b[j]) print.pb(a[i]);
    print_LCS(nxt[i][j].first , nxt[i][j].second);
}


void Raynox() {
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    memset(dp, -1, sizeof(dp));
    cout << LCS(0, 0) << nl;
    print_LCS(0,0);
    for(auto x : print) cout << x << " ";
    cout << nl;
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
