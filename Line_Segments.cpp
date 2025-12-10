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
	double x1,y1,x2,y2,sum=0;
	double mx=-1;
	cin>>x1>>y1>>x2>>y2;// proof to be polygon is that if the maxi side is less
	vector<double>a(n);//than the sum of the other sides then it is possible 
	rep(i,0,n) { cin>>a[i]; sum+=a[i]; mx=max(mx,a[i]);}//polygon else impossible;
	double x=(x2-x1),y=(y2-y1);
	double d=sqrt(pow(x,2)+pow(y,2));
	sum+=d;
	mx=max(mx,d);
	sum-=mx;
	if(sum<mx) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}

int32_t main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}

