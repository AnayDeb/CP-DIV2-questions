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
	int n,k,maxi=-1,mini=LLONG_MAX,sum=0;
	cin>>n>>k;
	vi a(n);
	rep(i,0,n) {cin>>a[i];maxi=max(maxi,a[i]); mini=min(mini,a[i]);
		sum+=a[i];
	}
	int cnt=0;
	rep(i,0,n) if(a[i]==maxi) cnt+=1;
	if(cnt==1){
		if(maxi-1-mini>k) cout<<"Jerry"<<endl;
		else{
			if(sum%2==0) cout<<"Jerry"<<endl;
			else cout<<"Tom"<<endl;
		}
	}
	else{
		if(maxi-mini>k) cout<<"Jerry"<<endl;
		else {
			if(sum%2==0) cout<<"Jerry"<<endl;
			else cout<<"Tom"<<endl;
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

