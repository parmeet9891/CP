#include<bits/stdc++.h>
using namespace std;

void solve() {
	string in;
	cin >> in;
	int n = in.size();
	string calc(n,'.');
	int i = 0;
	while(i < n) {
		if(in[i] == 'W') {
			string curr = in.substr(i,3);
			if(curr == "WUB") {
				calc[i] = '-';
				calc[i+1] = '-';
				calc[i+2] = '-';
				i += 3;
			}
			else {
				i+=1;
			}
		}
		else
			i+=1;
	}
	string ans = "";
	i = 0;
	while(i < n) {
		if(calc[i] == '.') {
			while(calc[i] == '.') {
				ans += in[i];
				i++;
			}
			ans += ' ';
		}
		else
			i++;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	solve();
}