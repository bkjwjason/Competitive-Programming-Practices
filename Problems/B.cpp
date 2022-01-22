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
	int l,r,k;
	cin >> l >> r >> k;
	if ((l == 1 && r == 1)){
		cout << "NO" << nl;
		return;
	}
	else if (l == r){
		cout << "YES" << nl;
		return;
	}
	if (l % 2 == 0){
		int cnt = ((r - l) / 2) + 1;
		if ((r - l + 1) - cnt <= k){
			cout << "YES" << nl;
			return;
		}
		else{
			cout << "NO" << nl;
			return;
		}
	}
	else if (r % 2 == 0){
		int cnt = ((r - l) / 2) + 1;
		if ((r - l + 1) - cnt <= k){
			cout << "YES" << nl;
			return;
		}
		else{
			cout << "NO" << nl;
			return;
		}
	}
	else{
		int cnt = ((r - l) / 2);
		if ((r - l + 1) - cnt <= k){
			cout << "YES" << nl;
			return;
		}
		else{
			cout << "NO" << nl;
			return;
		}

	}
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

