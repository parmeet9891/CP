#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	vector<vector<char>> v(n,vector<char>(m,'0'));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	string s = "vika";
	int count = 0, idx = 0;
	for(int i = 0; i < m; i++) {
		if(count == 4)
			break;
		for(int j = 0; j < n; j++) {
			if(v[j][i] == s[idx]) {
				count++;
				idx++;
				break;
			}
		}
	}
	cout << (count == 4 ? "YES" : "NO") << "\n";
	return;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
