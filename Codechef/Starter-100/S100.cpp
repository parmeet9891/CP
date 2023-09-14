#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
	int n, i = 0, pos = -1;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') {
			pos = i;
			break;
		}
	}
	
	if(pos == -1 || pos == (n-1) || pos == (n-2)) {
		cout << s << "\n";
		return;
	}
	
	for(int i = 0; i <= pos; i++) {
		cout << s[i];
	}
	for(int i = pos+1; i < n; i++){
		cout << "0";
	}
	cout << "\n";
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
