/*
╔══════════════════════════════════════════════════════════════════════════════╗
║
║              ██████╗  █████╗ ██████╗ ████████╗██╗  ██╗ ██████╗
║              ██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██║  ██║██╔═══██╗
║              ██████╔╝███████║██████╔╝   ██║   ███████║██║   ██║
║              ██╔═══╝ ██╔══██║██╔══██╗   ██║   ██╔══██║██║   ██║
║              ██║     ██║  ██║██║  ██║   ██║   ██║  ██║╚██████╔╝
║              ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝
║
║  Author      : Partho
║  Codeforces  : ImposterBhO0
║
╚══════════════════════════════════════════════════════════════════════════════╝
*/
#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<pii>         vpii;
typedef vector<vector<int>> vvi;

#define FASTIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb      push_back
#define eb      emplace_back
#define mp      make_pair
#define fi      first
#define se      second
#define sz(x)   (int)(x).size()
#define nl      '\n'
#define yes     cout << "YES\n"
#define no      cout << "NO\n"
#define rep(i,a,b)  for(int i=(a); i<(b); i++)
#define per(i,a,b)  for(int i=(b)-1; i>=(a); i--)
#define each(x,v)   for(auto& x : v)

ll gcd (ll a, ll b)  { return b ? gcd(b, a%b) : a; }
ll lcm (ll a, ll b)  { return a / gcd(a, b) * b; }

ll power (ll b, ll e, ll m) {
    ll r = 1; b %= m;
    for (; e > 0; e >>= 1, b = b*b%m) if (e & 1) r = r*b%m;
    return r;
}

ll isqrt (ll n) {
    ll r = sqrtl(n);
    while (r * r > n) r--;
    while ((r+1) * (r+1) <= n) r++;
    return r;
}

bool isPrime (ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

bool isPalin(const string& s) {
    return s == string(rall(s));
}

bool isPalin(ll n) {
    if (n < 0) return false;
    return isPalin(to_string(n));
}

template<typename T> bool chmin(T& a, T b) { return a > b ? a = b, 1 : 0; }
template<typename T> bool chmax(T& a, T b) { return a < b ? a = b, 1 : 0; }

void solve () {
    string s;
    getline(cin, s);
    cout << "1298197988357575630357615946309989172781499526462946440404470788684376985390305396125973940274843764538948490191717344783721875817526085569803360332092530718682267112679859306317411558863087818426102001668899234306693055686964760579621027877773686234248759339033931358637699120508778670025596407618498142605112965873772793404428930370152902997964477270381588912690683810916823833335686881700763513724028992569092246794950776968715184717728243012462390414227621817717867068058966580418918976468935264084796769674101914377191156171863506919883283323571087930176952794683907991833282608751543838689554419956431592838347473859623204004212280475920826575965023774235372163828753617234630059644337834100413117600419563724343249194990945993347755680337732115421318756889995217867276980098754900666968731807986512125923820175931843814664220286516209728924203079090588648842960680304591210029155785098537604132653531362413259292643427300863759134297143190650878269682503426289251546588929359842906988239725590" << nl;
}

int main() {
    FASTIO
    solve();
}