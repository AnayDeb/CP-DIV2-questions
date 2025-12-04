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
	int n,m;
	cin>>n>>m;
	string s; cin>>s;
	set<int>white,black;
	rep(i,0,2*(n+m)) white.insert(i+1);
	rep(i,0,m) {
		int x;
		cin>>x;
		white.erase(x);
		black.insert(x);
	}
	int num=1;
	rep(i,0,n){
		if(s[i]=='A'){
			num+=1;
			if(white.count(num)){
				white.erase(num);
				black.insert(num);
			}
		}
		else{
			num=*white.upper_bound(num);
			auto temp=num;
			num=*white.upper_bound(num);
			black.insert(temp);
			white.erase(temp);
		}
	}
	cout<<black.size()<<endl;
	for(auto i:black) cout<<i<<" ";
	cout<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

