#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
	int n;
	    cin>>n;
	    int k,x;
	    cin>>k>>x;
	    int curr=(n*(n+1))/2;
	    int curr2=(k*(k+1))/2;
	    k=n-k;
	    int curr3=(k*(k+1))/2;
	    int diff=curr-curr3;
    
    
	    if(x>curr){
	        cout<<"NO"<<endl;
	        return ;
	    }
	    if(x>diff){
	        cout<<"NO"<<endl;
	        return ;
	    }
	    if(curr2>x){
	        cout<<"NO"<<endl;
	        return ;
	    }
    
	    cout<<"YES"<<endl;
}
 
int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt; for(int i = 0; i < tt; i++) {solve();}
	//solve();
}
