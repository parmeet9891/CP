#include<bits/stdc++.h>
using namespace std;
#define ll long long int

/*
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
*/

void solve() {
	string x;
	cin >> x;
	if(x[0] >= '5') {
		string ans(x.size(),'0');
		cout << "1" + ans << "\n";
		return;
	}
	int n = x.size();
	bool f = true;
	while(f) {
		f = false;
		int i = 0;
		while(i < n) {
			if(x[i] >= '5') {
				//cout << "index " << i << "\n"; 
				f = true;
				if(i == 0) {
					string ans(x.size(),'0');
					string res = "1" + ans;
					cout << res << "\n";
					return;
				}
				else {
					int curr = (int)x[i-1];
					curr++;
					x[i-1] = (char)(curr);
					for(int k = i; k < n; k++)
						x[k] = '0';
					break;
				}
			}
			else
				i++;
		}
	}
	cout << x << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
