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
	int l,w,a,b,x1,y1,x2,y2;
	cin>>l>>w>>a>>b>>x1>>y1>>x2>>y2;
	/*
	if(x1==x2) {
		if(abs(y2-y1)%b==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return;
	}
	if(y1==y2){
		if(abs(x2-x1)%a==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return;
	}
	*/
	if(abs(x2-x1)%a==0 or abs(y2-y1)%b==0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

