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

	int T;
	cin >> T;
	vi v;
	for (int i = 0; i < T; i++){
		int a;
		cin >> a;
		v.pb(a);
	}

	if (sz(v) < 2){
		cout << sz(v) << nl;
		return 0;
	}
	int b = 1;
	int bl = 1;
	int bh = 1;

	for(int i = 1; i<sz(v); i++){
		if(v[i] == v[i-1]){
			bl = bl+1;
			bh = bh+1;
		}
		else if (v[i] -1 == v[i-1]){
			bl = 1 + bh;
			bh = 1;
		}
		else if (v[i] + 1 == v[i-1]){
			bh = 1 + bl;
			bl = 1;
		}
		else{
			bl = 1;
			bh = 1;
		}
	}
	
	if (bh >= bl && bh >= b){
		cout << bh << nl;
		return 0;
	}
	else if (bl >= bh && bl >= b){
		cout << bl << nl;
		return 0;
	}
	else if (b >= bh && b >= bl)
	{
		cout << b << nl;
		return 0;
	}

	return 0;
}

