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
	if(n==1){ cout<<1<<endl; cout<<1<<endl; return;}
	if(k==1 or k==n){
		cout<<-1<<endl;
	}
	else{
		int sz=min(n-k,k-1)*2+1;
		cout<<sz<<endl;
		rep(i,1,min(n-k,k-1)+1){
			cout<<i<<" ";
		}
		cout<<k<<" ";
		rep(i,1,min(n-k,k-1)+1) cout<<i+k<<" ";
		cout<<endl;
	}
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

