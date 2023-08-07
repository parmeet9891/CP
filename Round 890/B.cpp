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
	ll n;
	cin >> n;
	vector<ll> a(n);
	ll cnt = 0, total = 0;
	for(ll i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
		if(a[i] == 1)
			cnt++;
	}
	if(n == 1) {
		cout << "NO" << "\n";
		return;
	}
	ll cnt2 = cnt*2;
	n -= cnt;
	ll leftover = total-cnt2;
	if(leftover < n)
		cout << "NO" << "\n";
	else
		cout << "YES" << "\n";
	
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
