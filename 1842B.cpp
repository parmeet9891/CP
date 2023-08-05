#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

void solve() {
	int n,x;
	cin >> n >> x;
	vector<vector<int>> a(3,vector<int>(n,-1));
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	int ans = 0;

	auto valid=[&](int curr) -> bool {
		for(int i = 0; i < 32; i++) {
			if((curr >> i) & 1) {
				if(!((x >> i) & 1))
					return 0;
			}
		}
		return 1;
	};
	for(int i = 0; i < 3; i++) {
		int take = 0;
		for(int j = 0; j < n; j++) {
			if(valid(a[i][j]))
				take |= a[i][j];
			else
				break;
		}
		ans |= take;
	}
	cout << ((ans == x) ? "YES\n" : "NO\n");

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
