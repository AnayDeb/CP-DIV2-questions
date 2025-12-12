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
	string s; cin>>s;
	int n=s.size();
	vector<pair<int,int>>pre(n,{0,0});
	pre[0].first=(s[0]=='(');
	pre[0].second=(s[0]==')');
	rep(i,1,n){
		if(s[i]=='(') {pre[i].first=pre[i-1].first+1; pre[i].second=pre[i-1].second;} 
		else {pre[i].second=pre[i-1].second+1; pre[i].first=pre[i-1].first;}
	}
	/*
	rep(i,0,n){
		cout<<pre[i].first<<" "<<pre[i].second<<endl;
	}*/
	rep(i,0,n){
		if(pre[i].first==pre[i].second and i!=n-1) {
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

