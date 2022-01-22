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

void solve() {
	int n, k;
	cin >> n >> k;
	vi v1;
	vi v2;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		v1.pb(x);
	}
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		v2.pb(x);
	}
	int i = 0;
	while (i < sz(v1)){
		if (v1[i] <= k){
			k += v2[i];
			v1.erase(v1.begin() + i);
			v2.erase(v2.begin() + i);
			i = 0;
		}
		else{
			i++;
		}
	}
	cout << k << nl;
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

