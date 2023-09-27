#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b;
	int curr = 1, i = 0;
	while(i < n) {
		while(curr == a[i])
			curr++;
		b.push_back(curr);
		curr++;
		i++;
	}
	cout << b[n-1] << "\n";
}
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
