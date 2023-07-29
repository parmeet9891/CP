#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int q,x;
	cin >> q;
	for(int i = 0; i < q; i++) {
		cin >> x;
		vector<int>::iterator upper;
		upper = upper_bound(a.begin(),a.end(),x);
		cout << (upper-a.begin()) << "\n";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	solve();
}
