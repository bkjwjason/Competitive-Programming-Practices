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
	int n, m, r, c;
	cin >> n >> m >> r >> c;
	char a[n][m];
	r = r - 1;
	c = c - 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	if (a[r][c] == 'B'){
		cout << 0 << nl;
		return;
	}
	for (int i = 0; i < m; i++){
		if (a[r][i] == 'B'){
			cout << 1 << nl;
			return;
		}
	}
	for (int i = 0; i < n; i++){
		if (a[i][c] == 'B'){
			cout << 1 << nl;
			return;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i][j] == 'B'){
				cout << 2 << nl;
				return;
			}
		}
	}
	cout << -1 << nl;
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

