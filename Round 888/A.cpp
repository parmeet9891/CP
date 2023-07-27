#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m,h,k;
	cin >> n >> m >> k >> h;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxdiff = (m*k) - (k);
	int count = 0;
	for(int i = 0; i < n; i++) {
		int curr = abs(h-a[i]);
		if(curr%k == 0 && curr <= maxdiff && curr > 0)
			count++;
	}
	cout << count << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
