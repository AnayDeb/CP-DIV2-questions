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
	int n,k,zero=0,one=0;
	cin>>n>>k;
	string s;
	cin>>s;
	rep(i,0,k){
		if(s[i]=='1') one+=1;
		else zero+=1;
	}
	if(zero==0) {
		cout<<"NO"<<endl;
		return;
	}
	int j=0;
	rep(i,k,n){
		if(s[i]=='1') one+=1;
		else zero+=1;
		if(s[j++]=='1') one-=1;
		else zero-=1;
		if(zero==0){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	int num=1;
	vi ans(n+1);
	rep(i,0,n){
		if(s[i]=='1') ans[i+1]=num++; 
	}
	rep(i,0,n){
		if(s[i]=='0') ans[i+1]=num++;
	}
	rep(i,1,n+1) cout<<ans[i]<<" ";
	cout<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

