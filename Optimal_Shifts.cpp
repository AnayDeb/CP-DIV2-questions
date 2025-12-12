#include <bits/stdc++.h>
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
	string s; cin>>s;
	int ans=0,cnt=0;
	bool f=true;
	rep(i,0,n){
		if(s[i]=='1') {
			ans=max(ans,cnt);
			cnt=0;
		}
		else{
			cnt+=1;
			if(ans<=cnt){
				ans=cnt;
				if(i==n-1) f=false;
			}
		}
	}
	if(!f){
		rep(i,0,n){
			if(s[i]=='1') break;
			ans+=1;
		}
	}
	else{
		int cnt=0;
		for(int i=n-1;i>=0;--i) {if(s[i]=='0') cnt+=1; else break;}
		for(int i=0;i<n;++i) {if(s[i]=='0') cnt+=1; else break;}
		ans=max(ans,cnt);
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

