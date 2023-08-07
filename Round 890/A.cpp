#include<bits/stdc++.h>
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	auto b = a;
	sort(b.begin(),b.end());
	int ans = 0;
	for(int i = n-1; i >= 0; i--) {
		if(a[i] != b[i]) {
			ans = b[i];
			break;
		}
	}
	cout << ans << "\n";
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
