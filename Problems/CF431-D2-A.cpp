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
	int a[4];
	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < sz(s); i++){
		string x = s[i];
		int j = stoi(x);
		cout << j << nl;
	}
	cout << sum << nl;
	return 0;
}

