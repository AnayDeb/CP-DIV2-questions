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
	vi a(n),b(k);
	rep(i,0,n) cin>>a[i];
	rep(i,0,k) cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int j=0,ans=0;
	for(int i=n-1;i>=0;--i){
		if((i-b[j]+1)>=0 and j<k){
			if(b[j]==1){
				ans+=0;
			}
			else{
				int k=1;
				while(k<=b[j]){
					if(k!=b[j]) ans+=a[i--];
					k+=1;
				}
			}
			j++;
		}
		else ans+=a[i];
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

