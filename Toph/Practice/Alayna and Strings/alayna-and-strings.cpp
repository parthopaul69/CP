#include <iostream>

using namespace std;

int main() {
	string s; cin >> s;
	int cap = 0, sma = 0;
	for (char c : s) {
		if (c >= 'A' && c <= 'Z') {
			cap++;
		}
		if (c >= 'a' && c <= 'z') {
			sma++;
		}
	}
	cout << cap << " " << sma << endl;
}
