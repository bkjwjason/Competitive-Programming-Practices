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
	int r,g,b;
	int a[3];
	int sum = 0;
	cin >> r >> g >> b;
	a[0] = r; a[1] = g; a[2] = b;
	// Check if any same number
	for (int i = 0; i < 2; i++){
		if (a[i] == a[i+1]){
			cout << a[i] << nl;
		}
	}
	// Check if even number
	for (int i = 0; i < 3; i++){
		sum += a[i];
	}
	if (sum % 2 == 0){
		cout << -1 << nl;
	}
	// Check if all odd
	int cnt = 0;
	for (int i = 0; i < 3; i++){
		if (a[i] % 2 != 0){
			cnt++;
		}
	}
	if (cnt == 3){
		cout << -1 << nl;
	}
	// Needs 1 odd and 2 even number to work
	else 
	{
		int num = min({r,g,b});
		num = num + 2;
		cout << num + 1 << nl;
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

