#include<bits/stdc++.h>
using namespace std;
 
void solve() {
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int curr_count = 0, cnt = 0, i = 0, j = 0;
	while(i < n) {
		if(s[i] == 'B') {
			j = 0;
			curr_count = 0;
			while(j < k && i < n) {
				if(s[i] == 'B')
					curr_count++;
				j++;
				i++;
			}
			if(curr_count > 0)
				cnt++;
		}
		else
			i++;
	}
	cout << cnt << "\n";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
