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
	double g = 1; double s = 0;
	vl v;
	for(int i = 0; i<n; i++){
		long long x;
		cin >> x;
		v.pb(x);
	}
	int b = 0;
	if (v[b] >= v[b+1]){
		s = g * v[b];
		cout << 1 << " ";
		g = 0;
	}
	else{
		cout << 0 << " ";
	}
	for(int i = 1; i < n-1; i++){
		if (v[i] >= v[i+1] && g!= 0){
			s = g * v[i];
			cout << 1 << " ";
			g = 0;
		}
		else if (v[i] <= v[i+1] && s!= 0){
			g = s / v[i];
			cout << 1 << " ";
			s = 0;
		}
		else {
			cout << 0 << " ";
		}
	}
	if (s!=0){
		cout << 1 << " ";
	}
	else{
		cout << 0 << " ";
	}
	return 0;
}

