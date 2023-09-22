#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());
	a[0] += 1;
	int mul = 1;
	for(int i = 0; i < n; i++) {
		mul *= a[i];
	}
	cout << mul << "\n";
}
 
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
