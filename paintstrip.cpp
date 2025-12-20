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
vector<pair<int,bool>> pre(1e5+1,{0,false});
void find(){
	pre[1].first=1; pre[1].second=true;
	pre[4].first=2; pre[4].second=true;
	rep(i,2,1e5+1){
		if(pre[i].first==0) pre[i].first=pre[i-1].first;
		else {
			if((i+1)*2<=1e5){
				pre[(i+1)*2].first=pre[i].first+1;
				pre[(i+1)*2].second=true;
			}
		}
	}
}
void solve() {
	int n; cin>>n;
	if(n==1){ cout<<1<<endl; return;}
	//rep(i,0,23) cout<<pre[i].second<<" ";
	//cout<<endl;
	
	if(pre[n].second) cout<<pre[n].first<<endl;
	else cout<<pre[n].first+1<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    find();
    while(t--) solve();

    return 0;
}

