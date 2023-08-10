#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int count = 0;
	int n = s.size();
	for(char c: s) {
		if(c >= 'A' && c <= 'Z')
			count++;
	}
	bool flag = false;
	if(count == n || count == n-1) {
		if(count == n) {
			for(int i = 0; i < n; i++)
				s[i] = tolower(s[i]);
		}
		else if(count == n-1 && (s[0] >= 'a' && s[0] <= 'z')) {
			s[0] = toupper(s[0]);
			for(int i = 1; i < n; i++)
				s[i] = tolower(s[i]);
		}
	}
	cout << s << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	solve();
}
