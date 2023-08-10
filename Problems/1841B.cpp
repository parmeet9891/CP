#include<bits/stdc++.h>
using namespace std;
#define ll long long int

/*
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
*/

void solve() {
	int q,x;
	cin >> q >> x;
	cout << 1;
	int prev = x;
	bool f = true;
	int mn = x, mx = 1e9 + 10;
	for (int i = 1; i < q; ++i)
	{
		cin >> x;
		if(x >= mn && x <= mx) {
			cout << 1;
			mn = x;
		}
		else {
			if(f and x <= prev) {
				mn = x;
				mx = prev;
				cout << 1;
				f = false;
			}
			else
				cout << 0;
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
