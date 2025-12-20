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
	int cnts=0,cntp=0;
	rep(i,0,n){
		if(s[i]=='p') cntp+=1;
		if(s[i]=='s') cnts+=1;
	}
	if(cnts==0 or cntp==0) puts("YES");
	else if((cnts==1 and s[0]=='s') or (cntp==1 and s[n-1]=='p')) puts("YES");
	else puts("NO");
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

