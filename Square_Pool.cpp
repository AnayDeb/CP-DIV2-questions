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
	int n,b,ans=0;
	cin>>n>>b;
	map<pair<int,int>,int>mp;
	bool f=true;
	while(n--){
		int d1,d2; cin>>d1>>d2;
		int x,y; cin>>x>>y;
		if(x+y==b and d1*d2==-1) ans+=1;
		if(x==y and d1*d2==1) ans+=1;
		if(x==y and x==n/2) f=false;
	}
	if(f) cout<<ans<<endl;
	else cout<<ans-1<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

