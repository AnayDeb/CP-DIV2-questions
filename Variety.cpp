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
	int n; cin>>n;
	vi a(n);
	map<int,int>mp;
	rep(i,0,n) {cin>>a[i]; mp[a[i]]+=1;}
	int cnt=0,maxi=0,l=-1,r=-1;
	rep(i,0,n){
		if(mp[a[i]]==1){
			cnt+=1;
		}
		else cnt=0;
		if(cnt>maxi){
			l=i-cnt+1;
			r=i;
			maxi=cnt;
		}
	}
	if(maxi==0) cout<<0<<endl;
	else cout<<l+1<<" "<<r+1<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

