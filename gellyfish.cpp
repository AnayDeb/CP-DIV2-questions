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
const int mod=998244353;
const int N=1e5+1;
int po[N];
void pre(){
	po[0]=1;
	po[1]=2;
	rep(i,2,N){
		po[i]=(2*po[i-1])%mod;
	}
}
void solve() {
	int n; cin>>n;
	vi a(n),b(n);
	rep(i,0,n) cin>>a[i];
	rep(i,0,n) cin>>b[i];
	vi posa(n),posb(n),ans;
	rep(i,0,n) {
		posa[a[i]]=i;
		posb[b[i]]=i;
	}
	int maxia=-1,maxib=-1;
	rep(i,0,n){
		maxia=max(maxia,a[i]);
		maxib=max(maxib,b[i]);
		pair<int,int> p={maxia,b[i-posa[maxia]]};
		pair<int,int> q={maxib,a[i-posb[maxib]]};
		pair<int,int> res=max(p,q);
		ans.push_back((po[res.first]+po[res.second])%mod);
	}
	rep(i,0,n) cout<<ans[i]<<" ";
	cout<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    pre();
    while(t--) solve();

    return 0;
}

