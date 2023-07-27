#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());
	for(int i = 0; i < n; i++) {
		if((b[i]%2) == 0 && (a[i]%2) != 0) {
			cout << "NO" << "\n";
			return;
		}
		else if((b[i]%2) != 0 && (a[i]%2) == 0) {
			cout << "NO" << "\n";
			return;
		}
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