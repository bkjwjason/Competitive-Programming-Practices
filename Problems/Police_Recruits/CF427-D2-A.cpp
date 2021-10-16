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
	vi v;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.pb(x);
	}
	int sum = 0; int cnt = 0;
	for (int i = 0; i < sz(v); i++){
		if (v[i] < 0){
			sum += v[i];
			if (sum < 0){
				cnt++;	
			}
		}
		else{
			if (sum < 0){
				sum = 0;
				sum += v[i];
			}
			else{
				sum += v[i];
			}
		}
	}	
	cout << cnt << nl;
	return 0;
}

