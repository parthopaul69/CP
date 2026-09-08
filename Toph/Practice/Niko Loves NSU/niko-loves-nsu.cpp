#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, N = 0, S = 0, U = 0; cin >> n;
	string s; cin >> s;
    for (char c : s) {
		if (c == 'N') N++;
		else if (c == 'S') S++;
		else if (c == 'U') U++;
	}
    vector<int> v;
    v.push_back(N);
    v.push_back(S);
    v.push_back(U);
    sort(v.begin(), v.end());
    cout << v[0] << endl;
}
