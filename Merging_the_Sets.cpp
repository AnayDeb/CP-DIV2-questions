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
	map<int,int>mp;
	vector<vector<int>>v(n,vector<int>());
	rep(i,0,n){
		int x;
		cin>>x;
		vector<int>temp;
		while(x--){
			int y; cin>>y;
			temp.pb(y);
			mp[y]+=1;
		}
		v[i]=temp;
	}
	int cnt=0;
	for(auto i:v){
		for(int j=0;j<i.size();++j){
			if((mp[i[j]]-1)==0){
				cnt+=1;
				break;
			}
		}
	}
	if(n-cnt>=2 and mp.size()>=m) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

