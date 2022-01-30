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
	int n;
	cin >> n;
	vi v1;
	int f1 = 0;
	int f2 = 0;
	int a[2];
	for (int i = 0; i < n; i++){
		v1.pb(i);
	}
	int min_total = INT_MAX;
	for (int i = 0; i < n; i++){
		int maxm = 0;
		int maxm2 = 0;
		for (int j = i+1; j < n; j++){
			maxm = max(maxm, v1[i] ^ v1[j]);
			if (maxm != maxm2){
				f1 = i;
				f2 = j;
				maxm2 = maxm;
			}
		}
		if (maxm < min_total){
			min_total = maxm;
			a[0] = f1;
			a[1] = f2;
		}
	}
	for (auto i = v1.begin(); i != v1.end(); i++){
		if (*i == a[0] || *i == a[1]){
			v1.erase(i);
			i--;
		}
	}
	cout << a[0] << " " << a[1] << " ";
	for (int i = 0; i < sz(v1); i++){
		cout << v1[i] << " ";
	}
	cout << nl;
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

