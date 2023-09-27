#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	bool f = false;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] == k)
			f = true;
	}
	if(f)
		cout << "YES" << "\n";
	else cout << "NO" << "\n";
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
