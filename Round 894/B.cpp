#include<bits/stdc++.h>
using namespace std;
#define ll long long

// #ifndef ONLINE_JUDGE
// #include "debug.h"
// #else
// #define debug(...) 42
// #endif

void solve() {
	int n;
	cin >> n;
	vector<int> b(n);
	for(int i = 0; i < n; i++)
		cin >> b[i];
	vector<int> a;
	a.push_back(b[0]);
	for(int i = 1; i < n; i++) {
		if(b[i] >= b[i-1])
			a.push_back(b[i]);
		else {
			a.push_back(b[i]);
			a.push_back(b[i]);
		}
	}
	cout << a.size() << "\n";
	for(int x: a)
		cout << x << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
