#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	map<int,int> f;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		f[a[i]]++;
	}
	if(a[0] != n) {
		cout << "NO" << "\n";
		return;
	}
	int j = 0, width = 0;
	while(j < n) {
		int req = width + f[a[j]];
		//debug(req);
		//debug(width);
		if(f[req] == 0) {
			cout << "NO" << "\n";
			return;
		}
		width += f[a[j]];
		int last = a[j];
		while(j < n && a[j] == last)
			j++;
	}
	cout << "YES" << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
