#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	map<int,int> m,m1;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		m1[a[i]]++;
		m[a[i]] = i+1;
	}
	if(k == 1) {
		cout << "YES" << "\n";
		return;
	}
	int first = a[0], count = 1, i = 1;
	if(m1[first] >= k && m[first] == n) {
		cout << "YES" << "\n";
		return;
	}
	m1[first]--;
	while(i < n) {
		if(a[i] == first)
			count++;
		m1[a[i]]--;
		if(count == k) {
			i++;
			break;
		}
		i++;
	}
	// for(int j = i; j < n; j++) {
	// 	m[a[j]] = j+1;
	// 	m1[a[j]]++;
	// }
	if(m1.size() > 0)
		for(auto i: m1) {
			if(i.second >= k) {
				if(m[i.first] == n) {
					cout << "YES" << "\n";
					return;
				}
			}
		}
	cout << "NO" << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}