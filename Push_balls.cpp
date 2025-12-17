#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

#define int long long
#define pb push_back
#define vi vector<int>
#define vii vector<pair<int,int>>
#define rep(i,a,b) for(int i = (a); i < (b); i++)

// ===== GCD =====
int gcd(int a, int b) {
    return (b == 0 ? a : gcd(b, a % b));
}

// ===== LCM =====
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// ===== PRIME CHECK =====
bool isPrime(int n) {
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0) return false;
    return true;
}

// ===== SOLVE FUNCTION =====
void solve() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>>a(n,vector<int>(m));
	rep(i,0,n){
		string s; cin>>s;
		int n=s.size();
		rep(j,0,n){
			a[i][j]=s[j]-'0';
		}
	}
	vector<pair<int,int>>v;
	rep(i,0,n){
		rep(j,0,m) if(a[i][j]==1) v.pb({i,j});
	}	
	vector<pair<int,int>>ans(v.size());
	int k=0;
	for(auto [row,col]:v){
		bool f=true;
		for(int i=row;i>=0;--i){
			if(a[i][col]!=1) {f=false; break;} 
		}
		if(f) ans[k++].first=1;
		else ans[k++].first=0;
	}
	k=0;
	for(auto [row,col]:v){
		bool f=true;
		for(int i=col;i>=0;--i){
			if(a[row][i]!=1) { f=false; break;}
		}
		if(f) ans[k++].second=1;
		else ans[k++].second=0;
	}
	bool f=true;
	for(auto [i,j]:ans){
		if((i or j)==0) {f=false; break;}
	}
	if(f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

