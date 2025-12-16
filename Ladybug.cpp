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
	string s1,s2; cin>>s1>>s2;
	vi one(n),two(n);
	rep(i,0,n){
		if(i&1){
			if(s2[i]=='0') one[i]=0;
			else one[i]=1;
		}
		else{
			if(s1[i]=='0') one[i]=0;
			else one[i]=1;
		}
	}
	rep(i,0,n){
		if(i&1){
			if(s1[i]=='0') two[i]=0;
			else two[i]=1;
		}
		else{
			if(s2[i]=='0') two[i]=0;
			else two[i]=1;
		}
	}
	int cnt1=0,cnt2=0;
	rep(i,0,n){
		if(one[i]==0) cnt1+=1;
		if(two[i]==0) cnt2+=1;
	}
	if(cnt1>=(n+1)/2 and cnt2>=(n)/2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

