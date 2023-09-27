#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n;
	cin >> n;
	//6 9 13 15 18 21
	vector<int> a(n);
	a[0] = 6;
	for(int i = 1; i < n; i++)
		a[i] = a[i-1] + 3;
	for(int i = 2; i < n; i++) {
		if((a[i]*3)%(a[i-1]+a[i-2]) == 0)
			a[i-2]+=1;
	}
	for(int x: a)
		cout << x << " ";
	cout << "\n";
}
 
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
