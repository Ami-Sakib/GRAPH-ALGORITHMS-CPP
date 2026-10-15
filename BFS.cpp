/// starting with the name of almighty ALLAH
/*#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define pb push_back
#define al(x) (x).begin(), (x).end()
#define all(x) (x).rbegin(), (x).rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

const int mx = 1e7+123;
const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e18;

void Raynox() {
    int n, m;
    cin >> n >> m;
    vector<int>a[n+1];
    for(int i = 1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    int src = 1;
    queue<int>b;
    int lvl[n+1];

    int vis[n+1] = {0};

    lvl[src] = 0;
    b.push(src);

    vis[src] = 1;

    while(!b.empty()){
        int u = b.front();
        b.pop();
        for(int v : a[u]){
            if(vis[v]) continue;
            b.push(v);
            lvl[v] = lvl[u] + 1;
            vis[v] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        cout << i << "-> " << lvl[i] << nl;
    }
   int n, m;
   cin >> n >> m;
   vector<int>a[n+1];
   for(int i=1; i<=m; i++){
    int u, v;
    cin >> u >> v;
    a[u].pb(v);
    a[v].pb(u);
   }
   int cnt = 0;
   vector<int>vis(n+1, 0);
   for(int i=1; i<=n; i++){
    if(vis[i]) continue;
    cnt+=1;
    queue<int>q;
    q.push(i);
    vis[i] = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto x : a[u]){
            if(vis[x]) continue;
            vis[x] = 1;
            q.push(x);
        }
    }
   }
   cout << cnt << nl;

    
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
}*/ 

// coding with sakib
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

void Raynox() {
    int n, m;
    cin >> n >> m;
    vector<int>a[n+1];
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        a[u].pb(v);
        a[v].pb(u);
    }
    vector<int>vis(n+1, 0);
    vector<int>lvl(n+1);
    queue<int>q;
    int src = 1;
    q.push(src);
    vis[src] = 1;
    lvl[src] = 0;
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        for(auto x : a[u]){
            if(vis[x]) continue;
            q.push(x);
            lvl[x] = lvl[u] + 1;
            vis[x] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        cout << i << " " << lvl[i];
        cout << nl;
    }
    
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