#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	vector<long long> a(m);
	for(int i = 0; i < m; i++)
		cin >> a[i];
	long long cnt = a[0]-1;
	for(int i = 1; i < m; i++) {
		if(a[i] == a[i-1])
			continue;
		else if(a[i] > a[i-1]) {
			cnt += a[i]-a[i-1];
		}
		else {
			cnt += (n-a[i-1]) + a[i];
		}
	}
	cout << cnt << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	solve();
}
