#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int sum = 0,x;
	for(int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}
	cout << (sum%2 == 0 ? "YES":  "NO") << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
