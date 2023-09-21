#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,h;
	cin >> n >> h;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());
	int idx = -1;
	int init = h;
	for(int i = n-1; i >= 0; i--) {
		h -= a[i];
		if(h <= 0) {
			idx = i;
			break;
		}
	}
	if(idx == -1)
		cout << 0 << "\n";
	else
		cout << a[idx] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
