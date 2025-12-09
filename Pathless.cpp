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
	int n,s,sum=0,one=0,two=0,zero=0;
	cin>>n>>s;
	vi a(n);
	rep(i,0,n) {cin>>a[i]; sum+=a[i];
		if(a[i]==0) zero++;
		else if(a[i]==1) one++;
		else two++;
	}
	if(sum>s) {
		rep(i,0,n) cout<<a[i]<<" ";
		cout<<endl;
	}
	else if(sum==s){
		cout<<-1<<endl;
	}
	else{
		int d=s-sum;
		if(d==1){
			rep(i,0,zero) cout<<0<<" ";
			rep(i,0,two) cout<<2<<" ";
			rep(i,0,one) cout<<1<<" ";
			cout<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

