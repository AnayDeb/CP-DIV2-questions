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
	vi a(n),b(n),need(n);
	rep(i,0,n) cin>>a[i];
	rep(i,0,n) cin>>b[i];
	int exess=0,cnt=0;
	rep(i,0,n) {
		if(b[i]<a[i]) exess+=a[i]-b[i];
		if(a[i]-b[i]<0) cnt+=1;
	}
	rep(i,0,n) need[i]=a[i]-b[i];

	if(cnt>1){ cout<<"NO"<<endl; return;}
	bool f=true;
	rep(i,0,n){
		if(a[i]<b[i]){
			f=false;
			int s=need[i];
			for(int j=0;j<n;++j){
				if(i!=j){
					if(abs(need[j])<abs(s)) {cout<<"NO"<<endl; return;}
				}
			}
		}
		else{
			if(!f) break;
			else continue;
		}
	}
	cout<<"YES"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

