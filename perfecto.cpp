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
bool check(int n){
	int s=sqrt(n);
	return s*s==n;
}
void solve() {
	int n; cin>>n;
	int sum=0;
	rep(i,1,n+1) sum+=i;
	if(check(sum)) { cout<<-1<<endl; return;}
	vi pre(n,0);
	pre[0]=1;
	rep(i,1,n){
		pre[i]=pre[i-1]+(i+1);
	}
	vi ans(n);
	rep(i,0,n) ans[i]=i+1;
	rep(i,0,n){
		if(check(pre[i])) swap(ans[i],ans[i+1]);
	}

	rep(i,0,n) cout<<ans[i]<<" ";
	cout<<endl;

}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

