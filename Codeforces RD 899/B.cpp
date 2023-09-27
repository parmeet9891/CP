#include<bits/stdc++.h>
using namespace std;
//#define int long long
 
void solve() {
	int n;
	cin >> n;
	map<int,int> m;
	map<int,vector<int> > mv;
	vector<vector<int> > v;
	
	for(int i = 0; i < n; i++) {
		int k;
		cin >> k;
		vector<int> a(k);
		for(int j = 0; j < k; j++) {
			cin >> a[j];
			mv[a[j]].push_back(i);
			m[a[j]]++;
		}
		v.push_back(a);
	}
		
	
	int cnt = 0;
	auto copy = m;
	for(auto x: m) {
		int pick = x.first;
		vector<int> occ = mv[pick];
		for(int i = 0; i < occ.size(); i++) {
			int idx = occ[i];
			for(int j = 0; j < v[idx].size(); j++) {
				int ele  = v[idx][j];
				copy[ele]--;
				if(copy[ele] == 0)
					copy.erase(ele);
			} //ele
		} //occ
		cnt = max(cnt,(int)copy.size());
		copy = m;
	} //map
	cout << cnt << "\n";
}
 
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
