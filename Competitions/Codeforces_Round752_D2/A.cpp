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
// TLE
void solve() {
	int n;
	cin >> n;
	vl v;
	for (int i = 0; i < n; i++){
		ll a;
		cin >> a;
		v.pb(a);
	}
	ll cnt = 0;
	for (int i = 0; i < n; i++){
		if (v[i] > i+1){
			v.ins(v.begin()+i,1);
			cnt++;
			n++;
		}
	}
	cout << cnt << nl;

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

