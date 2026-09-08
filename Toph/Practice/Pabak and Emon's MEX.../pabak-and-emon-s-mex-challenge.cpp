#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
typedef vector<int> vi;
typedef vector<long long> vll;

#define FASTIO  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x)  (x).begin(),(x).end()
#define rall(x)  (x).rbegin(),(x).rend()
#define pb push_back
#define nl '\n'
#define rep(i, a, b)     for(int i=(a); i<(b); i++)
#define per(i, a, b)     for(int i=(b) - 1; i>=(a); i--)
#define each(x, v)   for(auto& x : v)

void solve() {
    ll n; cin >> n;
    vll v(n);
    set<ll> s;
    each (x, v)
    {
        cin >> x;
        s.insert(x);
    }
    vll temp(all(s));
    rep (i, 0, s.size())
    {
        if (temp[i] != i)
        {
            cout << i << nl;
            return;
        }
    }
    n == s.size() ? cout << n << nl : cout << n - 1 << nl;
}

int main() {
    FASTIO;
    solve();
}
