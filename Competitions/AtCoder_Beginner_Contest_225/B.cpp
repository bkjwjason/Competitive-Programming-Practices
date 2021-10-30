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



}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a,b;
	int x[n];
	for (int i = 0; i < n; i++){
		x[i] = 0;
	}
	for (int i = 0; i < n-1; i++){
		cin >> a >> b;
		x[a-1] = x[a-1] + 1;
		x[b-1] = x[b-1] + 1;
	}
	for (int i = 0; i < n; i++){
		if (x[i] == n-1){
			cout << "Yes" << nl;
			return 0;
		}
	}
	cout << "No" << nl;
	return 0;
}
