#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

const int MOD = 1000000007;
const char nl = '\n';


// Solution Starts Here
// TLE EXCEEDED AGAIN

void solve() {
	ll a1,a2,a3,ans;
	ll prev = MOD;
	cin >> a1 >> a2 >> a3;
	ans = abs(a1+a3-2*a2);	
	while (ans < prev){
		if (2*a2 > a1 + a3){
			a2--;
			a1++;
			prev = ans;
			ans = abs(a1+a3-2*a2);
		}
		else if ((2*a2) == (a1+a3)){
			cout << ans << nl;
			return;
		}
		else{
			a2++;
			a1--;
			prev = ans;
			ans = abs(a1+a3-2*a2);
		}
	}
	cout << prev << nl;
	return;
	}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while(T--) {
		solve();
	}

	return 0;
}

