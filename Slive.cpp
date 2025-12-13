#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

//#define int long long
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
int ans(int n){
	int cnt=0;
	while(n>1){
		n=(n+1)/2;
		cnt+=1;
	}
	return cnt;
}
void solve() {
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(a>(n-a+1)) a=n-a+1;
	if(b>(m-b+1)) b=m-b+1;
	cout<<min(1+ans(n)+ans(b),1+ans(m)+ans(a))<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

