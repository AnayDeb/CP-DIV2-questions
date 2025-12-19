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
	int n,k;
	cin>>n>>k;
	vi a(n);
	rep(i,0,n) cin>>a[i];
	if(n==k){
		int ok=1;
		for(int i=1;i<n;i+=2){
			if(a[i]!=ok){
				cout<<ok<<endl;
				return;
			}
			ok+=1;
		}
		cout<<ok<<endl;
		return;
	}
	bool f=true;
	for(int i=1;i<=(n-k+1);++i){
		if(a[i]!=1) {f=false; break;}
	}
	if(!f) cout<<1<<endl;
	else {
		cout<<2<<endl;
	}
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

