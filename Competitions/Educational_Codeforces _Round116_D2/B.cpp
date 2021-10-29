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
	ll n, k;
	cin >> n >> k;
	if (n == 1){
		cout << 0 << nl;
		return;
	}
	if (k == 1){
		cout << n - k << nl;
		return;
	}
	ll done = 2; ll rem = n - done;
	ll hr = 1;
	while (rem != 0){
		if (done <= k){
			if (rem <= done){
				hr++;
				break;
			}
			else {
				rem = rem - done;
				done = done * 2;
				hr++;
			}
			
		}
		else {
			if ((done + k) > n){
				hr++;
				break;
			}
			else if ((done + k) <=n){
				done = done + k;
				rem = rem - k;
				hr++;
			}
		}
		
	}
	cout << hr << nl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll T;
	cin >> T;
	while(T--) {
		solve();
	}

	return 0;
}

