#include<bits/stdc++.h>
using namespace std;

void solve() {
	int s,n;
	cin >> s >> n;
	vector<pair<int,int>> a;
	for(int i = 0; i < n; i++) {
		int x,y;
		cin >> x >> y;
		a.push_back({x,y});
	}
	sort(a.begin(),a.end());
	for(int i = 0; i < n; i++) {
		if(s > a[i].first) {
			s += a[i].second;
		}
		else {
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
	//int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	solve();
}
