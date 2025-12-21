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
	map<int,int>mp;
	rep(i,0,n) mp[s[i]]+=1;
	vector<pair<int,char>>v;
	for(auto i:mp) v.pb({i.second,i.first});
	sort(v.rbegin(),v.rend());
	char maxi=v[0].second,smaxi=v[1].second,mini=v[v.size()-1].second;
	int tmaxi=v[2].first,smaxii=v[1].first;
	if(v.size()>=2) { 
		rep(i,0,n){
			if(s[i]==mini) {s[i]=maxi; break;}
		}
		cout<<s<<endl;
		return;
	}
	if(v.size()==1) { cout<<s<<endl; return;}
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

