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
	int n,s;
	cin>>n>>s;
	int setbits=0;
	for(int i=0;i<32;++i){
		if(s&(1<<i)) setbits+=1;
	}
	if(n==1){
		if(s==0) cout<<-1<<endl;
		else cout<<s<<endl;
		return;
	}
	if(setbits>n){
		cout<<s<<endl;
		return;
	}
	int ans=s+(n-setbits);
	if((n-setbits)%2!=0){
		if(s==0 or s==1){
			ans+=3;
		}
		else ans+=1;
	}
	cout<<ans<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

